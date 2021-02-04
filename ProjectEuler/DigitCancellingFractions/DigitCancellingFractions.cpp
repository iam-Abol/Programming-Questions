#include "stdafx.h"
#include <iostream>
#include <string>
std::pair<float, float> removeSimilars(std::string first, std::string second){
	for (int i = 0; i < 2; i++)
	{
		int find = second.find(first[i]);
		if (find != -1)
			first[i] = second[find] = ' ';
	}

	std::pair<float, float> result = std::make_pair(std::stof(first), std::stof(second));
	return result;
}
bool isCurious(float first, float second){
	std::string strFirst = std::to_string(first), strSecond = std::to_string(second);
	std::pair<float, float> p = removeSimilars(strFirst, strSecond);
	if (strFirst[1] == '0'&&strSecond[1] == '0')
		return false;
	if (p.first < p.second&&first != p.first&&second != p.second){
		if (first / second == p.first / p.second)
			return true;
	}
	return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::pair<int, int> result{ 1, 1 };

	for (int second = 10; second < 100; second++)
	{
		for (int first = 10; first < second; first++)
		{
			if (isCurious(first, second))
			{
				result.first *= first;
				result.second *= second;
			}
		}

	}
	std::cout << result.second / result.first << std::endl;
	return 0;
}

