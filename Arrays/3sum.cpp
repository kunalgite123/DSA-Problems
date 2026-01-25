#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res;

    // Sort the array
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int target = -nums[i];
        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                res.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for left and right
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;

                left++;
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    cout << "Unique triplets that sum to 0 are:\n";
    for (auto triplet : res) {
        cout << "[ ";
        for (auto num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
