#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
bool f(int x){
	std::string s=std::to_string(x);
	std::sort(s.begin(), s.end());
	for (int i = 2; i < 7; i++)
	{
		std::string r = std::to_string(i *x);
		std::sort(r.begin(),r.end());
		if (r != s)
			return false;
	
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 1;; i++)
	{
		if (f(i))
		{
			std::cout << i << std::endl;
			break;
		}
	}
	return 0;
}

