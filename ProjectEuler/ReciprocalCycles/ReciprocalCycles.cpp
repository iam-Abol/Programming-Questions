#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
int numberOfFractions(int number){
	int one = 1;
	std::set<std::pair<int, int> > pairs;
	while (1){
		if (pairs.find(std::make_pair(one, number)) == pairs.end())
			pairs.insert(std::make_pair(one, number));
		else return pairs.size();
		if (one < number)
			one *= 10;
		one %= number;
		if (one==0)
			return pairs.size();

	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int max=0, numberOfFractionsOfmax = 0;
	for (int i = 2; i < 1000; i++)
	{
		int numberOfFractionOfi = numberOfFractions(i);
		if (numberOfFractionOfi>numberOfFractionsOfmax){
			max = i;
			numberOfFractionsOfmax = numberOfFractionOfi;
		}
	}
	std::cout << max<<std::endl;
	return 0;
}

