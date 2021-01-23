#include "stdafx.h"
#include <iostream>
void print(bool **board, int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == 1)
				std::cout << ".";
			else
				std::cout << "*";
		}
		std::cout << std::endl;
	}
}
bool isGood(bool **board, int i, int j, int n){
	for (int k = j + 1; k < n; k++)
	{
		if (board[i][k] == false)
			return false;
	}
	for (int k = j - 1; k >= 0; k--)
	{
		if (board[i][k] == false)
			return false;
	}
	for (int k = i - 1; k >= 0; k--)
	{
		if (board[k][j] == false)
			return false;
	}
	for (int k = i - 1, int l = j + 1; k >= 0 && l < n; k--, l++)
	{
		if (board[k][l] == false)
			return false;
	}
	for (int k = i - 1, int l = j - 1; k >= 0 && l >= 0; k--, l--)
	{
		if (board[k][l] == false)
			return false;
	}
	return true;
}
void findSolutions(bool **board, int i, int n){
	int j = 0;
	if (i == n)
	{
		print(board, n);
		return;
	}
	while (j < n)
	{

		j++;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	std::cin >> n;
	bool **board = new bool*[n];
	for (int i = 0; i < n; i++)
	{
		board[i] = new bool[n];
	}
	findSolutions(board, 0, n);
	for (int i = 0; i < n; i++)
	{
		delete[] board[i];
	}
	delete[] board;
	return 0;
}

