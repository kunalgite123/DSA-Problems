#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& A) {

        int pivot = -1;
        int n = A.size();

        for(int i = n-2; i>=0; i--){
            if(A[i] < A[i+1]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            reverse(A.begin(), A.end());
            return;
        }

        for(int i = n-1; i>pivot; i--){
            if(A[i] > A[pivot]){
                swap(A[i], A[pivot]);
                break;
            }
        }

        reverse(A.begin() + pivot + 1, A.end());
    }
};

int main(){
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    Solution obj;
    obj.nextPermutation(A);

    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    return 0;
}
