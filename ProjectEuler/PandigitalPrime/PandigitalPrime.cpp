#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
std::string fun(std::vector<int> arr){
	std::string result="";
	for (int i = 0; i < arr.size(); i++)
	{
		result += std::to_string(arr[i]);
	}
	return result;
}
bool isPrime(int number){
	for (int i = 2; i <=std::sqrt(number); i++)
	{
		if (number%i == 0)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long int result = 1;
	for (int i = 1; i < 8; i++)
	{
		std::vector<int > p;
		for (int j = 1; j <=i; j++)
		{
			p.push_back(j);
		}
		do
		{
			int number = std::stoi(fun(p));
			if (isPrime(number)&&number>result)
			{
				result = number;
			}
		} while (std::next_permutation(p.begin(),p.end()));
	}
	std::cout << result << std::endl;
	return 0;
}

