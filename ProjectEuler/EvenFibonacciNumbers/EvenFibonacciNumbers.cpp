#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int first = 1, second = 1, third = 2;
	int sum = 0;
	while (third < 4000000){

		if (third % 2 == 0)
			sum += third;
		first = second;
		second = third;
		third = first + second;
	}
	std::cout << sum;
	return 0;
}

