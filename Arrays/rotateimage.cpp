#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    // Step 1: Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void printMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
