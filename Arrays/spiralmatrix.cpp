#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int srow = 0, scol = 0;
    int erow = rows - 1, ecol = cols - 1;

    vector<int> spiral;

    while (srow <= erow && scol <= ecol) {

        // Top row
        for (int j = scol; j <= ecol; j++) {
            spiral.push_back(matrix[srow][j]);
        }
        srow++;

        // Right column
        for (int i = srow; i <= erow; i++) {
            spiral.push_back(matrix[i][ecol]);
        }
        ecol--;

        // Bottom row
        if (srow <= erow) {
            for (int j = ecol; j >= scol; j--) {
                spiral.push_back(matrix[erow][j]);
            }
            erow--;
        }

        // Left column
        if (scol <= ecol) {
            for (int i = erow; i >= srow; i--) {
                spiral.push_back(matrix[i][scol]);
            }
            scol++;
        }
    }

    return spiral;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
