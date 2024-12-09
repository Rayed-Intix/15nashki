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
}

// Функция для перемешивания элементов двумерного массива
void shuffleBoard(int Board[SIZE][SIZE]) {
    int flatBoard[SIZE * SIZE];
    int index = 0;

    // Преобразуем двумерный массив в одномерный
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            flatBoard[index++] = Board[i][j];
        }
    }

    // Перемешивание
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
    random_shuffle(flatBoard, flatBoard + SIZE * SIZE);

    // Обратно преобразуем одномерный массив в двумерный
    index = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            Board[i][j] = flatBoard[index++];
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
