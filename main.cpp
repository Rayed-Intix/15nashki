#include <iostream>
#include "header.h"
using namespace std;

int main(){
	int Board[4][4];
	initBoard(Board);
	shuffleBoard(Board);
	printBoard(Board);
	while (!Check(Board))
	{
		Movement(Board);
		printBoard(Board);
	}
	cout << "\nВы выиграли\n";
}
