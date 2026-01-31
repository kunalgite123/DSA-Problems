#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;
    cout << "array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
