
// Bruteforce approch
// Time complexity = O(n*m)
//space complexity  =O(1)


#include <iostream>
#include <vector>
using namespace std;

bool searchsorted(vector<vector<int>> matrix,int target){
          int n = matrix.size();
          int m = matrix[0].size();          
         for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j]==target){
                    cout<<"target find\n";
                    return true;
                    
                }
            }
          }
         cout<<"target not found\n";
          return false;
          
}

int main(){

vector<vector<int>> matrix ={{2,3,4},{5,6,7},{15,23,47}};
int target = 22;

cout<<searchsorted(matrix,target);
return 0;
}


//Binary search apporch

// Time complexity  =O(log(n*m))
 //space complexity = O(1)


#include <iostream>
#include <vector>
using namespace std;

bool searchsorted(vector<vector<int>> matrix,int target){
          int n = matrix.size();
          int m = matrix[0].size();          
          
          int start = 0;
          int end =n*m-1;

          while(start<=end){
            int mid = start + (end - start)/2;
            
            int i =mid/m;
            int j = mid%m;
            
            int value = matrix[i][j];
            if(value==target){
                return true;
            }
            else if( value<target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        
          }
          return false;
          
}

int main(){

vector<vector<int>> matrix ={{2,3,4},{5,6,7},{15,23,47}};
int target = 22;

cout<<searchsorted(matrix,target);
return 0;
}
}
