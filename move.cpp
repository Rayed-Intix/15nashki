#include <iostream>
#include <vector>

using namespace std;

void Movement(vector<vector<int>> &v){
	char t;
	do{
		cin >> t;
		switch(t){
		case 'w':
			break;
		case 'a':
			break;
		case 's':
			break;
		case 'd':
			break;
		default:
			cerr << "Incorrect Move. Try again!\n";
		}
	}while(!Check(v));
}
