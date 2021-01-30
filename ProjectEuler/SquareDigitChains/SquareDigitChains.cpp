#include "stdafx.h"
#include <iostream>
int sumOfSquaresOfDigits(int n){
	int result = 0;
	while (n != 0)
	{
		int digit = n % 10;
		result += digit*digit;
		n /= 10;
	}
	return result;
}
bool have89(const int n){
	int test = n;
	bool f = false;
	while (1)
	{
		test = sumOfSquaresOfDigits(test);
		if (test == 1)
			return false;
		else if (test == 89)
		{
			return true;
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int total = 0;
	for (int i = 1; i < 10000000; i++)
	{
		if (have89(i))
			total++;
	}
	std::cout << total << std::endl;
	return 0;
}

