#include "stdafx.h"
#include <iostream>
#include <cmath>
bool fifthPowerDigitsSum(int number){
	int n = number;
	int sum = 0;
	while (n != 0){
		sum += std::pow(n % 10,5);
		n /= 10;
	}
	return sum == number ? true : false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int sum = 0;
	for (int i = 2; i <= 1000000; i++){
		if (fifthPowerDigitsSum(i)){
			sum += i;
		}
	}
	std::cout << sum << std::endl;
	
	return 0;
}

