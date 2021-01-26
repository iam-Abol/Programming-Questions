#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int fun(int number){
	string result = "";
	for (int i = 1; i < number; i++)
	{
		result += to_string(i*number);
		if (result.size() == 9){
			string s = "123456789";
			for (int i = 0; i < 9; i++)
			{
				if (result.find(s[i]) == -1)
					return false;
			}
			return stoi(result);
		}
		else if (result.size()>9){
			return false;
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int max = 0;
	for (int i = 1; i < 10000; i++)
	{
		int f = fun(i);
		if (f>max)
		{
			max = f;
		}
	}
	std::cout << max << std::endl;
	return 0;
}

