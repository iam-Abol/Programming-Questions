#include "stdafx.h"
#include <iostream>
#include <string>
std::string mainWords[29] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "Thirteen","fourteen" ,"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred" };
std::string writeNumberInWord(int number){
	int digits[3] = { 0, 0, 0 };
	std::string result = "";
	for (int i = 2; number != 0; i--){
		digits[i] = number % 10;
		number /= 10;
	}
	bool and = false;
	if (digits[0] != 0){
		result += mainWords[digits[0] - 1] + " hundred" ;
		and = true;
	}
	if (digits[1] == 0)
	{
		if (digits[2] != 0){
			if (and == true)
				result += " and ";
			result += " " + mainWords[digits[2] - 1];
		}
		

	}
	else if (digits[1] == 1){
		if (and==true)
			result += " and ";
		result += mainWords[digits[2] + 9];

	}
	else{
		if (and==true)
			result += " and ";
		result += mainWords[digits[1] + 17];
		if (digits[2] != 0)
			result +=" "+ mainWords[digits[2] - 1];
	}

	return result;
}
int countNumberOfLetters(std::string str){
	int result = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
			result++;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int result = 0;
	for (int i = 1; i < 1000; i++){
		std::cout << writeNumberInWord(i) << std::endl;
		result+=countNumberOfLetters( writeNumberInWord(i) );
	}
	result += countNumberOfLetters("one thousand");
	std::cout << result;
	
	return 0;
}

