#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
std::pair<double, int> f(double n){
	std::pair<double, int> result = std::make_pair(0, 0);
	int second = 0;
	while (n > 10)
	{
		n /= 10;
		second++;
	}
	result.first = n;
	result.second = second;
	return result;
}
std::pair<double, int> convert(std::pair<double, int> number){
	//number = base + power
	std::pair<double, int> result = std::make_pair(0, 0);
	result = f(number.first);
	for (int i = 2; i <= number.second; i++)
	{
		result.first *= number.first;
		if (result.first > 10){
			while (result.first>10)
			{
				result.first /= 10;
				result.second++;
			}
		}
	}
	return result;
}
std::pair<double,int> max(std::pair<double, int> first, std::pair<double, int> second){
	if (first.second > second.second)
		return first;
	else if (second.second > first.second)
		return second;
	else{
		if (first.first > second.first)
			return first;
		else
			return second;
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::fstream input("text.txt");
	std::string line;
	std::pair<double, int> m{ 0, 0 };
	int r = 1;
	int result = 0;
	while (input)
	{
		input >> line;
		std::string first="", second = "";
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == ','){
				second = line.substr(i + 1);
				break;
			}
			else{
				first += line[i];
			}
		}
		std::pair<double, int> number = std::make_pair(std::stod(first), std::stoi(second));
		number = convert(number);
		m = max(m,number);
		if (m == number){
			result = r;
		}
		r++;
	}
	std::cout << result << std::endl;
	return 0;
}

