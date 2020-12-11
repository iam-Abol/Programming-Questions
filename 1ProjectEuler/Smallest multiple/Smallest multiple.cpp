#include "stdafx.h"
#include <iostream>
bool func(long long int number){
	for (int i = 1; i <= 20; i++){
		if (number%i != 0)
			return false;
	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int i = 1;
	while (func(i) == false){
		i++;
	}
	std::cout<<i;
	return 0;
}

