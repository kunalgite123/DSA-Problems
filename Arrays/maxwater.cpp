#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxwater = 0;
    int st = 0, ed = n - 1;

    while (st < ed) {
        int wt = ed - st;
        int ht = min(height[st], height[ed]);
        int currarea = wt * ht;

        maxwater = max(maxwater, currarea);

        if (height[st] > height[ed]) {
            ed--;
        } else {
            st++;
        }
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "maximum Area: " << maxArea(height) << endl;

    return 0;
}
