#include "stdafx.h"
#include <iostream>
#include <string>
void addZero(std::string &s, int n){
	for (int i = 0; i < n; i++)
	{
		s += "0";
	}
}
void zeroFill(std::string &s, int n){
	std::reverse(s.begin(), s.end());
	for (int i = 0; i < n; i++)
	{
		s += "0";
	}
	std::reverse(s.begin(), s.end());
}
std::string plus(std::string first, std::string second){
	first.size()>second.size() ? zeroFill(second, first.size() - second.size()) : zeroFill(first, second.size() - first.size());
	std::string result = "";
	int a, b;
	int addToResult = 0;
	int t = 0;
	for (int i = first.size() - 1; i >= 0; i--)
	{
		a = first[i] - 48;
		b = second[i] - 48;
		t = a + b + addToResult;
		result += std::to_string(t % 10);
		addToResult = t / 10;
	}
	if (addToResult != 0)
		result += std::to_string(addToResult);
	std::reverse(result.begin(), result.end());
	return result;
}
std::string product(std::string first, std::string second){
	std::string result = "";
	int add = 0;
	int t;
	for (int i = second.size() - 1; i >= 0; i--)
	{
		add = 0;
		std::string r = "";
		for (int j = first.size() - 1; j >= 0; j--)
		{
			t = (first[j] - 48) *(second[i] - 48) + add;
			add = t / 10;
			r += std::to_string(t % 10);
		}
		if (add != 0)
			r += std::to_string(add);
		std::reverse(r.begin(), r.end());
		addZero(r, second.size() - (i + 1));
		result = plus(result, r);
	}
	return result;
}
int sumOfDigits(std::string number){
	int result = 0;
	for (int i = 0; i < number.size(); i++)
	{
		result += number[i] - 48;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int max = 0;
	for (int a = 1; a < 100; a++)
	{
		const std::string s = std::to_string(a);
		std::string p = "1";
		for (int i = 1; i < 100; i++)
		{
			p = product(p, s);
			int sum = sumOfDigits(p);
			if (sum>max)
				max = sum;
		}
	}
	std::cout << max << std::endl;
	return 0;
}

