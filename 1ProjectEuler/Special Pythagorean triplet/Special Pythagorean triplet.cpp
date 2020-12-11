#include "stdafx.h"
#include <iostream>
bool isPythagorean(int a, int b, int c){
	if (((a*a) + (b*b)) == (c*c))
		return true;
	else
		return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 1; i < 1000; i++){
		for (int j = 1; j < 1000; j++){
			for (int k = 1; k < 1000; k++){
				if (isPythagorean(i, j, k)&& i + j + k == 1000){
					std::cout << i*j*k << std::endl;
					return 0;
				}
			}
		}
	}
	
	return 0;
}

