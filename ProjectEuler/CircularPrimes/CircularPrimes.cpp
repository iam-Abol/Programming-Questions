#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
bool isPrime(std::string str){
	int number = std::stoi(str);
	for (int i = 2; i <= std::sqrt(number); i++){
		if (number%i == 0)
			return false;
	}
	return true;
}
bool isCircularPrime(std::string number){
	for (int i = 0; i < number.size(); i++){
		if (isPrime(number.substr(i) + number.substr(0, i)) ==false)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int numberOfCircularPrimes = 0;
	for (int i = 2; i < 1000000; i++)
	{
		if (isCircularPrime(std::to_string(i)))
			numberOfCircularPrimes++;
	}
	std::cout << numberOfCircularPrimes << std::endl;
	return 0;
}