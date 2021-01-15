#include "stdafx.h"
#include <iostream>
long long int power(int n){
	long long int result = 1;
	for (int i = 0; i < n; i++)
	{
		result *= n;
		result = result % 10000000000;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int lastTenDigit = 0;
	for (int i = 1; i <=1000; i++)
	{
		lastTenDigit += power(i);
		lastTenDigit %= 10000000000;
	}
	std::cout << lastTenDigit;
	return 0;
}

