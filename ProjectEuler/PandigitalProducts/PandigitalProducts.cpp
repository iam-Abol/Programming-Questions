#include "stdafx.h"
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
int isPermutation(int multiplicand, int multiplier, int product){
	std::string all = std::to_string(multiplicand) + std::to_string(multiplier) + std::to_string(product);
	if (all.size() == 9){
		std::string oneToNine = "123456789";
		for (int i = 0; i < oneToNine.size(); i++)
		{
			if (all.find(oneToNine[i]) == -1)
				return false;
		}
		return true;
	}
	else if (all.size()>9)
		return -1;
	return false;

}
int _tmain(int argc, _TCHAR* argv[])
{
	int  p = 0;
	std::set<int> products;
	for (int multiplicand = 1; multiplicand < 10000; multiplicand++)
	{
		for (int multiplier = 1; multiplier < 10000; multiplier++)
		{
			p = multiplicand*multiplier;
			int r = isPermutation(multiplicand, multiplier, p);
			if (r == -1)
				break;
			else if (r==1)
				products.insert(p);
		}
	}
	long long int sum = 0;
	for (auto i = products.begin(); i != products.end(); i++)
	{
		sum += *i;
	}
	std::cout << sum << std::endl;
	return 0;
}

