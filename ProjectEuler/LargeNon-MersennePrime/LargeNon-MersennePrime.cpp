#include "stdafx.h"
#include <iostream>
 long long int max = 10000000000;
int _tmain(int argc, _TCHAR* argv[])
{
	long long int result = 1;
	for (int i = 1; i <= 7830457; i++)
	{
		result *= 2;
		if (result > max){
			result %= max;
		}

	}
	result *= 28433;
	result++;
	result %= max;
	std::cout << result << std::endl;
	return 0;
}

