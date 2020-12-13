#include "stdafx.h"
#include <iostream>
long long int func(long long int number){
	long long int result = 1;
	while (number != 1)
	{
		result++;
		if (number % 2 == 0)
			number /= 2;
		else{
			number *= 3;
			number++;
		}


	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::pair <long long int, int> max;
	max = std::make_pair(0, 0);
	int f = 0;
	for (long long int i = 1; i < 1000000; i++){
		f = func(i);
		if (f > max.second)
		{
			max.first = i;
			max.second = f;
		}
	}
	std::cout << max.first << std::endl;
	return 0;
}

