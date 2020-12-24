#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>

void zeroFill(std::string &str, int numberOfNewZero){
	std::reverse(str.begin(), str.end());
	for (int i = 0; i < numberOfNewZero; i++)
		str += "0";
	std::reverse(str.begin(), str.end());
}

std::string plus(std::string first, std::string second){
	std::string result = "";
	int a, b, sum = 0, addToResult = 0;
	if (first.size()>second.size())
		zeroFill(second, first.size() - second.size());
	else
		zeroFill(first, second.size() - first.size());

	for (int i = second.size() - 1; i >= 0; i--){
		a = first[i] - 48;
		b = second[i] - 48;
		a += addToResult;
		sum = a + b;
		result += std::to_string(sum % 10);
		addToResult = sum / 10;
	}
	if (addToResult != 0)
		result += std::to_string(addToResult);
	std::reverse(result.begin(), result.end());
	return result;
}

std::string productOfANumberToOneDigit(std::string main, int digit){
	int a, p, addToResult = 0;
	std::string result = "";
	for (int i = main.size() - 1; i >= 0; i--){
		a = main[i] - 48;
		p = a*digit;
		p += addToResult;
		result += std::to_string(p % 10);
		addToResult = p / 10;

	}
	if (addToResult != 0)
		result += std::to_string(addToResult);
	std::reverse(result.begin(), result.end());
	return result;
}

void addZero(std::string &str, int numberOfZero){
	for (int i = 0; i < numberOfZero; i++)
	{
		str += "0";
	}
}

std::string product(std::string first, std::string second){
	std::string result = "";
	for (int i = second.size() - 1; i >= 0; i--){
		std::string p = productOfANumberToOneDigit(first, second[i] - 48);
		addZero(p, second.size() - (i + 1));
		result = plus(result, p);
	}
	return result;
}

std::string power(int first, int pow){
	std::string result = "1";
	for (int i = 0; i < pow; i++)
	{
		result = product(result, std::to_string(first));
	}
	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::set<std::string> s;
	for (int a = 2; a <= 100; a++){
		for (int b = 2; b <= 100; b++){
			if (std::pow(a, b) < 0)
				s.insert(power(a, b));
			else
				s.insert(std::to_string(std::pow(a, b)));
		}
	}
	std::cout << s.size() << std::endl;
	return 0;
}