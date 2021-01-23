#include "stdafx.h"
#include <iostream>
#include <string>
int _tmain(int argc, _TCHAR* argv[])
{
	std::string number = "";
	for (int i = 1; number.size()<1000000; i++)
	{
		number += std::to_string(i);
	}
	int result = 0;
	result = (int)(number[0] - 48)*(int)(number[9] - 48)*(int)(number[99] - 48)*(int)(number[999] - 48)*(int)(number[9999] - 48)*(int)(number[99999] - 48)*(int)(number[999999] - 48);
	std::cout << result << std::endl;
	return 0;
}

