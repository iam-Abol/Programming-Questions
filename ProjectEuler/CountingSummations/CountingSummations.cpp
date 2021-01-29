#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 100;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n+1];
	}
	for (int i = 0; i < n+1; i++)
	{
		arr[1][i] = 1;
	}
	for (int i = 2; i < n; i++)
	{
		for (int j = 0; j < n+1; j++)
		{
			if (j < i)
				arr[i][j] = arr[i - 1][j];
			else
				arr[i][j] = arr[i - 1][j] + arr[i][j - i];
		}

	}
	std::cout << arr[n - 1][n] << std::endl;
	for (int i = 0; i < n-1; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

