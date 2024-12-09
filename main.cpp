#include <iostream>
#include "header.h"
using namespace std;

int main(){
	int Board[4][4];
	int x, y;
	initBoard(Board);
	shuffleBoard(Board);
	findCoord(Board, x, y);
	printBoard(Board);
	while (!Check(Board))
	{
		Movement(Board, x, y);
		printBoard(Board);
	}
	cout << "\nВы выиграли\n";
}
