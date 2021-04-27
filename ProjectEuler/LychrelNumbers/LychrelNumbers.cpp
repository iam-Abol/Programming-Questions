#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
void zeroFill(std::string &str, int n){
	std::reverse(str.begin(), str.end());
	for (int i = 0; i < n; i++)
	{
		str += "0";
	}
	std::reverse(str.begin(), str.end());
}
std::string plus(std::string first, std::string second){
	first.size() < second.size() ? zeroFill(first, second.size() - first.size()) : zeroFill(second, first.size() - second.size());
	int a, b, addToResult = 0;
	std::string result = "";
	int sum = 0;
	for (int i = second.size() - 1; i >= 0; i--)
	{
		a = first[i] - 48;
		b = second[i] - 48;
		sum = a + b + addToResult;
		result += std::to_string(sum % 10);
		addToResult = sum / 10;
	}
	if (addToResult != 0)
		result += std::to_string(addToResult);
	std::reverse(result.begin(), result.end());
	return result;
}
std::string reverse(std::string n){
	std::reverse(n.begin(), n.end());
	return n;
}
bool isPalidrome(std::string n){
	if (n == reverse(n))
		return true;
	return false;
}
bool isLychrel(std::string number){
	for (int i = 0; i < 50; i++)
	{
		
		number = plus(number, reverse(number));
		if (isPalidrome(number))
			return false;

	}
	return true;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int result=0;
	for (int i = 1; i < 10000; i++)
	{
		
		if (isLychrel(std::to_string(i)))
			result++;
	}
	std::cout << result << std::endl;
	return 0;
}