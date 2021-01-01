#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>

bool isAbudant(int number){
	int sumOfProperDivisors = 0;
	for (int i = 1; i < number; i++){
		
		if (number%i == 0)
			sumOfProperDivisors += i;

	}
	return sumOfProperDivisors > number ? true : false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<int> abudantNumbers;
	for (int i = 1; i < 28123; i++){
		if (isAbudant(i))
			abudantNumbers.push_back(i);
	}

	bool noneAbudant[28123];
	for (int i = 0; i < abudantNumbers.size(); i++){
		for (int j = i; j < abudantNumbers.size(); j++){
			
			if (abudantNumbers[i] + abudantNumbers[j] < 28123){
				noneAbudant[abudantNumbers[i] + abudantNumbers[j]] = false;
			}
		}
	}
	long long int sum=0;
	for (int i = 1; i < 28123; i++){
		
		if (noneAbudant[i])
			sum += i;
		
	}
	std::cout << sum << std::endl;
	return 0;
}

