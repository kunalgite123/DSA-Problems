
//time complexity =O(n)
//space complexity =O(n)

#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if(n == 0) return 0;

    vector<int> leftmax(n), rightmax(n);

    leftmax[0] = height[0];
    rightmax[n - 1] = height[n - 1];

    // Build leftmax array
    for(int i = 1; i < n; i++) {
        leftmax[i] = max(leftmax[i - 1], height[i]);
    }

    // Build rightmax array
    for(int i = n - 2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], height[i]);
    }

    int trapwater = 0;

    // Calculate trapped water
    for(int i = 0; i < n; i++) {
        int currwater = min(leftmax[i], rightmax[i]) - height[i];
        if(currwater > 0) {
            trapwater += currwater;
        }
    }

    return trapwater;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int result = trap(height);

    cout << "Trapped Water = " << result << endl;

    return 0;
}
