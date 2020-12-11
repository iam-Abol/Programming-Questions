#include "stdafx.h"
#include <iostream>
#include <cmath>
int _tmain(int argc, _TCHAR* argv[])
{
	long long int sumOfSquares=0;
	long long int squareOfSum=0;
	for (int i = 1; i <= 100; i++)
	{
		squareOfSum += i;
		sumOfSquares += std::pow(i, 2);
	}

	std::cout << (squareOfSum*squareOfSum) - sumOfSquares  << std::endl;
	return 0;
}

