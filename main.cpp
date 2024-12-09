#include <iostream>
#include "header.h"
using namespace std;

int main(){
	int Board[4][4];
	int x, y;
	char direction;
	initBoard(Board);
	shuffleBoard(Board);
	findCoord(Board, x, y);
	printBoard(Board);
	while (!Check(Board))
	{
		cin >> direction;
		Movement(Board, x, y, direction);
		printBoard(Board);
	}
	cout << "\nВы выиграли\n";
}
