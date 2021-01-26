#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
string convertToBinary(int number){
	string result = "";
	while (number)
	{
		if (number % 2 == 0)
			result += "0";
		else
			result += "1";
		number /= 2;
	}

	return result;
}
bool isPalindrome(string number){
	string n = number;
	reverse(number.begin(), number.end());
	if (number == n){
		string binary = convertToBinary(stoi(number));
		string b = binary;
		reverse(binary.begin(), binary.end());
		if (b == binary)
			return true;
	}
	return false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	long long int sum = 0;
	for (int i = 1; i < 1000000; i++)
	{
		if (isPalindrome(to_string(i)))
			sum += i;
	}
	std::cout << sum << std::endl;
	string s = to_string(585);
	return 0;
}

