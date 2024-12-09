#include <iostream>
using namespace std;

void printBoard(const vector<int> board) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (board[i * 4 + j] == 0)
                cout << "   ";
            else
                cout << board[i * 4 + j] << "\t";
        }
        cout << endl;
    }
}

void initBoard(vector<int>& board){
    for (int i = 0; i < 15; i++) {
        board[i] = i + 1;
    }
    board[15] = 0;
    printBoard(board);
}