#include <bits/stdc++.h>
using namespace std;

set<vector<int>> s;

void getAllcombinations(vector<int>& arr, int idx, int tar,
                        vector<vector<int>>& ans, vector<int>& combin) {

    if (idx == arr.size() || tar < 0) {
        return;
    }

    if (tar == 0) {
        if (s.find(combin) == s.end()) {
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }

    // include current element
    combin.push_back(arr[idx]);

    // single (take once)
    getAllcombinations(arr, idx + 1, tar - arr[idx], ans, combin);

    // multiple (take again)
    getAllcombinations(arr, idx, tar - arr[idx], ans, combin);

    combin.pop_back();

    // exclude current element
    getAllcombinations(arr, idx + 1, tar, ans, combin);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> ans;
    vector<int> combin;

    getAllcombinations(arr, 0, target, ans, combin);

    cout << "Combinations are:\n";
    for (auto &v : ans) {
        cout << "[ ";
        for (int x : v) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
