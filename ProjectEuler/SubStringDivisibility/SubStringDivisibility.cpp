#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int prime[7] = { 2, 3, 5, 7, 11, 13, 17 };
bool fun(int a[10]){
	int arr[7];
	for (int i = 0; i < 7; i++)
	{
		arr[i] = a[i + 1] * 100 + a[i + 2] * 10 + a[i + 3];
	}
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] % prime[i] != 0)
			return false;
	}
	return true;
}
long long int p(int arr[10]){
	std::string result = "";
	for (int i = 0; i < 10; i++)
	{
		result += std::to_string(arr[i]);
	}
	return stoll(result);
}
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10] = { 1, 0, 2, 3, 4, 5, 6, 7, 8, 9 };
	long long int sum = 0;

	do
	{
		if (fun(arr)){
			sum += p(arr);
		}

	} while (next_permutation(&arr[0], &arr[10]));
	std::cout << sum << std::endl;
	return 0;
}

