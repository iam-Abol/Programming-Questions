#include "stdafx.h"
#include <iostream>
#include <cmath>
bool isPrime(long long int number){
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
	long long int i = 1;
	int k = 0;
	while (k != 10001){
		i++;
		if (isPrime(i))
			k++;
	}
	std::cout << i << std::endl;
	return 0;
}

