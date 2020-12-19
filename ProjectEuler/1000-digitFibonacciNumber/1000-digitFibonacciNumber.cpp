#include "stdafx.h"
#include <iostream>
#include <string>
void addZero(std::string &str, int numberOfNewZeros){
	std::reverse(str.begin(), str.end());
	for (size_t i = 0; i < numberOfNewZeros; i++)
	{
		str += "0";
	}
	std::reverse(str.begin(), str.end());
}
std::string plus(std::string first, std::string second){
	if (first.size() < second.size())
		addZero(first, second.size() - first.size());
	else
		addZero(second, first.size() - second.size());
	int a, b, t, addToResult;
	addToResult = 0;
	std::string result = "";
	for (int i = first.size() - 1; i >= 0; i--){
		a = first[i];
		b = second[i];
		a -= 48;
		b -= 48;
		a += addToResult;
		t = a + b;
		result += std::to_string(t % 10);
		addToResult = t / 10;
	}
	if (addToResult != 0)
		result += std::to_string(addToResult);
	std::reverse(result.begin(), result.end());
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::string first, second, third="2";
	first = second = "1";
	int i = 3;
	while (third.size() < 1000){
		first = second;
		second = third;
		third = plus(first, second);
		i++;
	}
	std::cout << i << std::endl;
	return 0;
}

