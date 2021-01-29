#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
std::string result = "";
bool isPrime(std::string s){
	int n = std::stoi(s);
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
bool isArithmeticSequence(std::vector<int> arr){
	if (arr.size() < 3)
		return false;
	std::sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i+1; j < arr.size(); j++)
		{
			for (int k = j+1; k <arr.size(); k++)
			{
				if (arr[k] - arr[j] == arr[j] - arr[i])
				{
					std::string r = std::to_string(arr[i]) + std::to_string(arr[j]) + std::to_string(arr[k]);
					if (r != ::result)
						::result = r;
					return true;
				}
			}
		}
	}
	return false;
}
void f(std::string prime){
	std::vector<int> arr;
	arr.push_back(std::stoi(prime));
	while (std::next_permutation(&prime[0], &prime[4]))
	{
		if (isPrime(prime))
		{
			arr.push_back(std::stoi(prime));
		}
	}
	isArithmeticSequence(arr);
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 1000; i < 10000; i++)
	{
		if (isPrime(std::to_string(i)))
			f(std::to_string(i));
	}
	std::cout << result << std::endl;
	return 0;
}

