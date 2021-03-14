#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isBouncy(int n){
	const string s = to_string(n);
	string r = s;
	sort(r.begin(), r.end(), [](char a, char b){
		return a < b;
	});
	string l = r;
	reverse(l.begin(), l.end());
	if (s != r&&s != l)
		return true;
	return false;
}
double percent(double n, double m){
	return (n / m) * 100;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int numberOfBouncyNumbers = 0;
	for (int i = 0;; i++)
	{
		if (isBouncy(i))
			numberOfBouncyNumbers++;
		double r = percent(numberOfBouncyNumbers, i);
		if (r == 99){
			std::cout << i << std::endl;
			break;
		}

	}
	return 0;
}

