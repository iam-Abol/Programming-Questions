#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
void zeroFill(std::string &number, int size){
	std::reverse(number.begin(), number.end());
	while (number.size() != size)
		number += "0";
	std::reverse(number.begin(), number.end());
}
std::string plus(std::string first, std::string second){
	std::string result = "";
	int a, b, addToResult = 0;
	if (first.size() < second.size())
		zeroFill(first, second.size());
	else
		zeroFill(second, first.size());
	int t = 0;
	for (int i = first.size() - 1; i >= 0; i--){
		a = first[i] - 48;
		b = second[i] - 48;
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
void addZero(std::string &str, int n){
	for (int i = 0; i < n; i++)
		str += "0";
}
std::string product(std::string first, std::string second){
	std::string result = "";
	int a, b, t, addToResult = 0;
	for (int i = second.size() - 1; i >= 0; i--){
		std::string p = "";
		b = second[i];
		b -= 48;
		for (int j = first.size() - 1; j >= 0; j--){
			a = first[j];
			a -= 48;
			t = a*b;
			t += addToResult;
			p += std::to_string(t % 10);
			addToResult = t / 10;
		}
		if (addToResult != 0)
			p += std::to_string(addToResult);
		std::reverse(p.begin(), p.end());
		addZero(p, (second.size() - 1) - i);
		result = plus(result, p);
		addToResult = 0;
	}
	return result;
}

int sumOfDigits(std::string number){
	int result = 0;;
	int t = 0;
	for (int i = 0; i < number.size(); i++){
		t = number[i];
		t -= 48;
		result += t;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::string fact = "1";
	for (int i = 1; i <= 100; i++){
		fact = product(fact, std::to_string(i));
		
	}
	std::cout << sumOfDigits(fact);
	return 0;
}

