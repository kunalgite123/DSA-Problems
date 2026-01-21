
//Time complexity  = O(n*m)
//Space complexity = O(n*m)

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> matrix){
    int n = matrix.size(); // number of row
    int m = matrix[0].size(); //number of column
    vector<vector<int>> trans(m,vector<int>(n));
    
    for(int i = 0; i<m; i++){ //transpose logic
        for(int j =0; j<n; j++){
            trans[i][j] = matrix[j][i];
        }
    }
  
    for(int i = 0; i<n; i++){ //printing transpose
       for(int j = 0;  j<m; j++){
        cout<<trans[i][j]<<" ";
       }
       cout<<"\n";
 }

}

int main(){
    vector<vector<int>> matrix ={{2,3,4},{5,2,5},{5,6,8}};
    transpose(matrix);
    return 0;
}
