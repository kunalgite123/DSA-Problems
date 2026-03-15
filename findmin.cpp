#include <iostream>
#include <vector>
using namespace std;

bool searchTarget(vector<int>& nums, int si, int ei, int target) {

    if (si > ei) {
        return false;
    }

    int mid = si + (ei - si) / 2;

    if (nums[mid] == target) {
        return true;
    }

    // duplicate case
    if (nums[si] == nums[mid] && nums[mid] == nums[ei]) {
        return searchTarget(nums, si + 1, ei - 1, target);
    }

    // left sorted
    if (nums[si] <= nums[mid]) {
        if (nums[si] <= target && target <= nums[mid]) {
            return searchTarget(nums, si, mid - 1, target);
        } 
        else {
            return searchTarget(nums, mid + 1, ei, target);
        }
    }

    // right sorted
    else {
        if (nums[mid] <= target && target <= nums[ei]) {
            return searchTarget(nums, mid + 1, ei, target);
        } 
        else {
            return searchTarget(nums, si, mid - 1, target);
        }
    }
}

bool search(vector<int>& nums, int target) {

    int si = 0;
    int ei = nums.size() - 1;

    return searchTarget(nums, si, ei, target);
}

int main() {

    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;

    if (search(nums, target)) {
        cout << "target found";
    } 
    else {
        cout << "target not found";
    }

    return 0;
}
