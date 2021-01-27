#include "stdafx.h"
#include <iostream>
#include <cmath>
bool isRightAngle(int a, int b, int c){
	if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
		return true;
	return false;
}
int numberOfRightAngleTriangle(int n){
	int result = 0;
	for (int i = 1; i < n / 2; i++)
	{
		for (int j = i; j < n / 2; j++)
		{
			if (isRightAngle(i, j, n - (i + j)))
				result++;
		}

	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int max = 0, result = 0;
	for (int i = 1; i <= 1000; i++){
		int r = numberOfRightAngleTriangle(i);
		if (r > max)
		{
			max = r;
			result = i;
		}
	}
	std::cout << result << std::endl;
	return 0;
}

