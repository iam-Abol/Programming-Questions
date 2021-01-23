#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	std::cin >> n;
	int **board = new int*[n];
	for (int i = 0; i < n; i++)
	{
		board[i] = new int[n];
	}


	for (int i = 0; i < n; i++)
	{
		delete[] board[i];
	}
	delete[] board;
	return 0;
}

