#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    int n = image.size();

    for(int i = 0; i < n; i++) {
        reverse(image[i].begin(), image[i].end());

        for(int j = 0; j < image[i].size(); j++) {
            image[i][j] = image[i][j] ^ 1;
        }
    }

    // Print output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < image[i].size(); j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
