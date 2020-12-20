#include "stdafx.h"
#include <iostream>
#include <algorithm>
void print(int arr[10])
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int list[10];
	for (int i = 0; i < 10; i++)
		list[i] = i;
	for (int i = 1; i < 1000000; i++)
	{
		std::next_permutation(&list[0], &list[10]);

	}
	print(list);
	return 0;
}

