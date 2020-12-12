#include "stdafx.h"
#include <iostream>
#include <string>
bool isPalisdrome(int number){
	std::string str = std::to_string(number);

	std::reverse(str.begin(), str.end());
	if (str == std::to_string(number))
		return true;
	else
		return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int max = 0;
	for (int i = 100; i <= 1000; i++){
		for (int j = 100; j <= 1000; j++){
			int number = i*j;
			if (isPalisdrome(number))
			{
				if (number > max){
					max = number;
				}



			}

		}
	}
	std::cout << max;

	return 0;
}

