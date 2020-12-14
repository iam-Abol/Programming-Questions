#include "stdafx.h"
#include <iostream>
#include <string>
std::string pow2(std::string number){
	int t = 0;
	int addToNumber = 0;
	std::string result = "";
	for (int i = number.size() - 1; i >= 0; i--){
		t = number[i];
		t -= 48;
		t *= 2;
		t += addToNumber;
		result += std::to_string(t % 10);
		addToNumber = t / 10;
	}
	if (addToNumber != 0)
		result += std::to_string(addToNumber);
	std::reverse(result.begin(), result.end());
	return result;
}
int sumOfDigits(std::string number){
	int digit = 0;
	int result = 0;
	for (int i = 0; i < number.size(); i++){
		digit = number[i];
		digit -= 48;
		result += digit;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::string result = "1";
	for (int i = 0; i < 1000; i++){
		result = pow2(result);
	}
	std::cout << "result is : " << result << std::endl;

	std::cout << "sum of digit of result is : " << sumOfDigits(result) << std::endl;
	return 0;
}

