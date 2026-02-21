#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {

    // vertical
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    // left diagonal
    for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    // right diagonal
    for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

void printBoard(vector<string>& board, int n){
    cout << "\nSolution:\n";
    for(int i = 0; i < n; i++){
        cout << board[i] << endl;   // direct print
    }
}

void nQueens(vector<string>& board, int row, int n){

    if(row == n){
        printBoard(board, n);
        return;
    }

    for(int j = 0; j < n; j++){
        if(isSafe(board, row, j, n)){
            board[row][j] = 'Q';
            nQueens(board, row+1, n);
            board[row][j] = '.';  // backtrack
        }
    }
}

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<string> board(n, string(n,'.'));

    nQueens(board, 0, n);

    return 0;
}
