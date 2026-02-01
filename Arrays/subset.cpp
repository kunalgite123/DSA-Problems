#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans = {{}};

    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < ans.size(); j++) {
            vector<int> temp = ans[j];
            temp.push_back(nums[i]);
            ans.push_back(temp);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    cout << "Subsets are:\n";
    for (auto v : result) {
        cout << "{ ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}
