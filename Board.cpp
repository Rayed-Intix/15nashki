#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

const int SIZE = 4;

// Функция для создания двумерного массива 4 на 4
void initBoard(int Board[SIZE][SIZE]) {
    int value = 1;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            Board[i][j] = value++;
        }
    }
    Board[3][3] = 0;
}

// Функция для перемешивания элементов двумерного массива
void shuffleBoard(int Board[SIZE][SIZE]) {
        srand(time(0));
        int start = 1;
        int end = 4;
    for (int i = 0; i <= 80; i++){
        int m = rand() % (end - start + 1) + start;
        switch(m){
        case 1: Movement(Board, x, y, m);break;
        case 2: Movement(Board, x, y, m);break;
        case 3: Movement(Board, x, y, m);break;
        case 4: Movement(Board, x, y, m);break;
        }
        }
}

// Функция для вывода двумерного массива
void printBoard(int Board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << Board[i][j] << "\t";
        }
        cout << endl;
    }
}
