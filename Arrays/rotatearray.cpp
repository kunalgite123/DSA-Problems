#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    k = k % n;   

    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    nums = temp;

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
