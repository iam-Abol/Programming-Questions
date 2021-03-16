#include <iostream>
#include <vector>
#include <cmath>
int pentagonal(int n){
	return n*(3 * n - 1) / 2;
}
bool isPentagonal(long long int N)
{
	double n = (1 + std::sqrt(24 * N + 1)) / 6;
	return (n - (int)n) == 0;
}
int main()
{
	std::vector<long int> v;
	for (int i = 1; i <= 10000; i++)
	{
		v.push_back(pentagonal(i));
	}
	int min = v[v.size() - 1];
	bool find = false;
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			long long int a = v[i] + v[j], b = v[j] - v[i];
			if (isPentagonal(a) && isPentagonal(b))
			{
				min = b;
				find = true;
			}
		}
		if (find)
			break;
	}
	std::cout << min << std::endl;
	return 0;
}

