#include <iostream>

int main()
{
	int coin[8] = { 1, 2, 5, 10, 20, 50, 100, 200 };
	int **arr = new int*[8];
	for (int i = 0; i < 8; i++)
	{
		arr[i] = new int[201];
	}
	for (int i = 0; i < 201; i++)
	{
		arr[0][i] = 1;
	}
	for (int i = 1; i < 8; i++)
	{
		for (int j = 0; j < 201; j++)
		{
			if (j < coin[i])
				arr[i][j] = arr[i - 1][j];
			else{
				arr[i][j] = arr[i - 1][j] + arr[i][j - coin[i]];
			}
		}

	}
	std::cout << arr[7][200] << std::endl;
	for (int i = 0; i < 8; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	
	return 0;
}

