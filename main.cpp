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
<<<<<<< HEAD
		cin >> direction;
=======
		cin >> directon;
>>>>>>> refs/remotes/origin/main
		Movement(Board, x, y, direction);
		printBoard(Board);
	}
	cout << "\nВы выиграли\n";
}
