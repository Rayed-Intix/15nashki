#include <iostream>
#include <vector>

using namespace std;

void findCoord(int v[4][4], int& x, int& y){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(v[i][j] == 0){
				x = j;
				y = i;
			}
		}
	}
}

void _swap(int& a, int& b){
	int t = a;
	a = b;
	b = t;
}

void Movement(int v[4][4], int& x, int& y,char t){
	switch(t){
	case 'w':
		if(y != 0)
		{
			_swap(v[y][x], v[y-1][x]);
			y = y - 1;
		}
		else
			cerr << "Incorrect Move. Try again\n";
		break;
	case 'a':
		if(x != 0)
		{
			_swap(v[y][x], v[y][x-1]);
			x = x - 1;
		}
		else
			cerr << "Incorrect Move. Try again!\n";
		break;
	case 's':
		if(y != 3)
		{
			_swap(v[y][x], v[y+1][x]);
			y = y + 1;
		}
		else
			cerr << "Incorrect Move. Try again!\n";
		break;
	case 'd':
		if(x != 3)
		{
			_swap(v[y][x], v[y][x+1]);
			x = x + 1;
		}
		else
			cerr << "Incorrect Move. Try again!\n";
		break;
	default:
		cerr << "Incorrect Move. Try again!\n";
	}
}
