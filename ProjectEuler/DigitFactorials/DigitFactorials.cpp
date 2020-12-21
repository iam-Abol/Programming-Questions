#include "stdafx.h"
#include <iostream>
int factorial(int number){
	int result = 1;
	for (int i = 1; i <=number; i++)
	{
		result *= i;
	}
	return result;
}

int factorialDigits(int number){
	
	int sum = 0;
	while (number != 0){
		sum += factorial(number % 10);
		number /= 10;
	}
	return sum;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int sum=0;
	for (int i = 3; i <= 1000000; i++){
		if (i == factorialDigits(i))
			sum += i;
	}
	std::cout << sum;
	return 0;
}
