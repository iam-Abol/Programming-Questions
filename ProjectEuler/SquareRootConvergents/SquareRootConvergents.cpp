#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
void addZero(std::string &str, int numberOfNewZeros){
	std::reverse(str.begin(), str.end());
	for (size_t i = 0; i < numberOfNewZeros; i++)
	{
		str += "0";
	}
	std::reverse(str.begin(), str.end());
}
string plusStrings(string first, string second){
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
void reverse(pair<string, string> &fraction){
	string temp = fraction.first;
	fraction.first = fraction.second;
	fraction.second = temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<pair<string,string> > fractions;
	pair<string, string> fraction = make_pair("1", "2");
	for (int i = 0; i < 1000; i++){
		fractions.push_back(make_pair(plusStrings(fraction.first,fraction.second),fraction.second));
		fraction.first = plusStrings(fraction.first, fraction.second); fraction.first = plusStrings(fraction.first, fraction.second);
		reverse(fraction);
		

	}
	int result = 0;
	for (int i = 0; i < fractions.size(); i++){
		if (fractions[i].first.size()>fractions[i].second.size())
			result++;
	}
	cout << result << endl;
	return 0;
}

