#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
int facts[10];
int fact(int n){
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
int digitsFact(int number){
	int result = 0;
	while (number != 0)
	{
		int d = number % 10;
		result += facts[d];
		number /= 10;
	}
	return result;
}
bool f(long int n){

	set<long int > chain;
	chain.insert(n);
	long int c = n;
	int size = 1;
	int size2;
	int result = 1;
	while (1)
	{
		c = digitsFact(c);
		size = chain.size();
		chain.insert(c);
		int size2 = chain.size();
		if (size == size2)
			break;
		result++;
		if (size2 > 60)
			return false;
	}
	return result == 60 ? true : false;
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 10; i++)
	{
		facts[i] = fact(i);
	}
	/////////////////////////////
	int result = 0;
	for (int i = 1; i < 1000000; i++)
	{
		if (f(i))
			result++;
	}
	cout << result << endl;
	return 0;
}