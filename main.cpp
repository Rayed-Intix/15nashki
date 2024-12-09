#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

void printBoard(int Board[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << Board[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
	int v[4][4] = {	{1,0,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,2} };
	int x, y;
	findCoord(v, x, y);
	printBoard(v);
	while(true){
		Movement(v, x, y);
		printBoard(v);
	}
	return 0;
}
