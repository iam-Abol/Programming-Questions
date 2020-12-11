#include "stdafx.h"
#include <iostream>
#include <cmath>
bool isPrime(int number){
	if (number <= 1)
		return false;
	for (int i = 2; i <= std::sqrt(number); i++){
		if (number%i == 0)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int sum = 0;
	for (int i = 1; i < 2000000; i++){
		if (isPrime(i))
			sum += i;
	}
	std::cout << sum;
	return 0;
}

