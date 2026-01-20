
//Time complexity = O(n*m) where m is max element of array
//Space Complexity = O(n)


#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int id = -1;
            for (int j = 0; j < nums[i]; j++) {
                if ((j | (j + 1)) == nums[i]) {
                    id = j;
                    break;
                }
            }
            ans.push_back(id);
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums;
    int x;

    
    while (cin >> x) {
        nums.push_back(x);
    }

    vector<int> result = sol.minBitwiseArray(nums);

    for (int v : result) {
        cout << v << " ";
    }

    return 0;
}
