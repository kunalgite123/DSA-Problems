#include <bits/stdc++.h>
using namespace std;

int returnsq(vector<int>&nums){
    int n = nums.size();

    for(int i = 0; i<n; i++){
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
}

int main(){
    vector<int>nums = {-4,-1,0,3,10};
    returnsq(nums);


    for(int  i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;

}
