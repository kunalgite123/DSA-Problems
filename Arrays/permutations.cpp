#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& nums, int idx) {
    if (idx == nums.size()) {
        for (int x : nums) cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        permute(nums, idx + 1);
        swap(nums[idx], nums[i]);   // backtrack
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    permute(nums, 0);
    return 0;
}
