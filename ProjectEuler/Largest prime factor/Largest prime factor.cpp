#include "stdafx.h"
#include <iostream>
#include <cmath>
bool isPrime(long long int number){
	if (number <= 1)
		return false;
	for (long long int i = 2; i < number; i++){
		if (number%i == 0)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int max=0;
	long long int number = 600851475143;
	for (long int i = 2; i < number; i++)
	{
		if (number%i == 0 &&isPrime(i)){
			max = i;
			std::cout << i << std::endl;
		}
	}
	std::cout <<max;
	return 0;
}

