#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }

        mp[nums[i]] = i;
    }

    return {};  
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
