#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> nums = {3, 5, 2, 3};

    
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int ans = 0;

    
    for(int i = 0; i < n/2; i++) {
        ans = max(ans, nums[i] + nums[n-1-i]);
    }

    
    cout << "Minimum Maximum Pair Sum = " << ans << endl;

    return 0;
}
