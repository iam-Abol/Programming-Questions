#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<vector<unsigned long long int> > triangle;
	vector<unsigned long long int> v1, v2;
	v1.push_back(1);
	v2.push_back(1);
	v2.push_back(1);
	triangle.push_back(v1);
	triangle.push_back(v2);
///////////////////////////////////
	for (int i = 3; i <=101 ; i++)
	{
		vector<unsigned long long int> l;
		l.push_back(1);
		for (unsigned long long int j = 1; j < i - 1; j++)
		{
			unsigned long long int a = triangle[i - 2][j],
				b=triangle[i - 2][j - 1];
			long long int sum = a + b;
			if (sum < 0)
				sum = 10000000;
			l.push_back(sum);
		}

		l.push_back(1);
		triangle.push_back(l);
	}
	int numbersMoreThanOneMillion=0;
	for (int i = 0; i < triangle.size(); i++)
	{
		for (int j = 0;  j < triangle[i].size();  j++)
		{
			if (triangle[i][j]>1000000)
				numbersMoreThanOneMillion++;
		}
	}
	std::cout << numbersMoreThanOneMillion << std::endl;
	return 0;
}

