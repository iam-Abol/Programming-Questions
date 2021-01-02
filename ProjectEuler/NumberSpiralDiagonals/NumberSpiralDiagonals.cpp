#include "stdafx.h"
#include <iostream>
void print(int arr[5][5], int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;

	}
}
long long int sumOfNumbersOnDiagonals(long long int **arr, int n){
	long long int sum = 0;
	int i = n - 1;
	int j = 0;
	while (i >= 0 && j < n){
		sum += arr[i][j];
		i--;
		j++;
	}
	i = j = 0;
	while (i < n&&j < n){
		sum += arr[i][j];
		i++;
		j++;
	}
	return sum - 1;
}
int _tmain(int argc, _TCHAR* argv[])
{
	const int n = 1001;
	long long int **arr=new long long int*[n];
	for (int a = 0; a < n; a++)
	{
		arr[a] = new long long int[n];
	}
	long long int i = n / 2, j = n / 2;
	arr[i][j] = 1;
	arr[i][j + 1] = 2;
	arr[i + 1][j + 1] = 3;
	arr[i + 1][j] = 4;
	i++;
	j--;
	int k = 5;
	bool flag = true;
	while (flag){
		while (arr[i][j + 1] > 0 && i < n&&j<n){
			if (i == 0 && j == n - 1){
				arr[i][j] = k;
				flag = false;
				break;
			}
			arr[i][j] = k;
			k++;
			i--;

		}
		if (flag==false)
		{
			break;
		}
		while (arr[i + 1][j] > 0 && i < n&&j<n){
			if (i == 0 && j == n - 1){
				arr[i][j] = k;
				flag = false;
				break;
			}
			arr[i][j] = k;
			k++;
			j++;

		}
		if (flag == false)
		{
			break;
		}
		while (arr[i][j - 1] > 0 && i < n&&j<n){
			if (i == 0 && j == n - 1){
				arr[i][j] = k;
				flag = false;
				break;
			}
			arr[i][j] = k;
			k++;
			i++;


		}
		if (flag == false)
		{
			break;
		}
		while (arr[i - 1][j] > 0 && i < n&&j<n){
			if (i == 0 && j == n - 1){
				arr[i][j] = k;
				flag = false;
				break;
			}
			arr[i][j] = k;
			k++;
			j--;

		}

	}
	int result= sumOfNumbersOnDiagonals(arr, n);
	for (int a = 0; a < n; a++)
	{
		delete[] arr[a];
	}
	delete[] arr;
	std::cout << result << std::endl;
	return 0;
}

