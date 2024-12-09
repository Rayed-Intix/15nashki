bool Check(int array[4][4])
{
	int array2[4][4] { {1, 2, 3, 4} , {5, 6, 7, 8} , {9, 10, 11, 12} , {13, 14, 15, 0} };
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (array[i][j] != array2[i][j]) return false;
	return true;
}
