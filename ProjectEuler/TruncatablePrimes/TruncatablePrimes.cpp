#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
bool isPrime(int number){
	if (number < 2)
		return false;
	for (int i = 2; i <= std::sqrt(number); i++)
	{
		if (number%i == 0)
			return false;
	}
	return true;
}
bool isTruncatable(int number){
	std::string str = std::to_string(number);
	for (int i = 0; i < str.size(); i++)
	{
		if (isPrime(std::stoi(str.substr(i))) == false)
			return false;
	}
	while (number!=0)
	{
		if (isPrime(number) == false)
			return false;
		number /= 10;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	int sum = 0;
	for (int i = 10;; i++)
	{
		if (isTruncatable(i))
		{
			sum += i;
			n++;
		}
		if (n == 11)
			break;
	}
	std::cout << sum << std::endl;
	return 0;
}

