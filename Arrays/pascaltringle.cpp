#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;

    for(int i = 1; i <= numRows; i++) {

        long long value = 1;
        vector<int> ansRow;
        ansRow.push_back(1);

        for(int col = 1; col < i; col++) {
            value = value * (i - col);
            value = value / col;
            ansRow.push_back(value);
        }

        ans.push_back(ansRow);
    }

    return ans;
}

int main() {

    int numRows;
    cout << "enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    for(auto row : result) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
