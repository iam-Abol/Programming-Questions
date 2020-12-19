#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>
int sumOfDivisors(int number){
	int sum = 0;
	for (int i = 1; i < std::sqrt(number); i++)
	{
		if (number%i == 0){
			if (number / i == i || i == 1)
				sum += i;
			else
				sum += i + (number / i);
		}

	}
	return sum;
}
bool isFound(std::vector<std::pair<int, int> > pairs, std::pair<int, int> p){
	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].first == p.first&&p.second == pairs[i].second || pairs[i].second == p.first&&p.second == pairs[i].first)
			return true;
	}
	return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::vector <std::pair<int, int> > pairs;
	long long int result = 0;
	for (int i = 1; i < 10000; i++){
		int sum = sumOfDivisors(i);
		if (sumOfDivisors(sum) == i&&i != sum && isFound(pairs, std::make_pair(i, sum)) == false)
			pairs.push_back(std::make_pair(i, sum));
	}
	for (int i = 0; i < pairs.size(); i++){

		result += pairs[i].first + pairs[i].second;
	}

	std::cout << result;
	return 0;
}

