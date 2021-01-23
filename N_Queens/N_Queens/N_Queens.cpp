#include "stdafx.h"
#include <iostream>
const int n =8;
int numberOfSolutions = 0;
void print(bool board[n][n]){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[i][j] == false)
				std::cout << "* ";
			else
				std::cout << ". ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
	
}
bool isGood(bool board[n][n], int i, int j){
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
	for (int k = i - 1, l = j + 1; k >= 0 && l < n; k--, l++)
	{
		if (board[k][l] == false)
			return false;
	}
	for (int k = i - 1, l = j - 1; k >= 0 && l >= 0; k--, l--)
	{
		if (board[k][l] == false)
			return false;
	}
	return true;
}
void findSolutions(bool board[n][n], int i){
	
	if (i == n)
	{
		print(board);
		numberOfSolutions++;
		return;
	}
	int j = 0;
	while (j < n)
	{
		if (isGood(board, i, j))
		{
			board[i][j] = false;
			findSolutions(board, i + 1);
			board[i][j] = true;
		}
		j++;
		if (j == n)
			return;
	}

}
int _tmain(int argc, _TCHAR* argv[])
{

	bool board[n][n];
	findSolutions(board, 0);
	std::cout <<"number of solutions : "<< numberOfSolutions << std::endl;
	return 0;
}

