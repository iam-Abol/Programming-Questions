#include "stdafx.h"
#include <iostream>
#include <cmath>
int countNumberOfDividors(long long int number){
	int n = 0;
	for (int i = 1; i <= std::sqrt(number); i++){
		if (number%i == 0){
			if (number / i == i)
				n++;
			else
				n += 2;
		}
	}
	return n;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int i = 1;
	long long int number = 0;
	int numberOfDividors = 0;
	while (true){
		number += i;
		numberOfDividors = countNumberOfDividors(number);
		if (numberOfDividors > 500)
			break;
		i++;
		
	}
	std::cout << countNumberOfDividors(17907120);
	return 0;
}

