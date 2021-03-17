#include <iostream>
#include <vector>
#include <cmath>
const int MAX = 1000000;
bool isPrime(unsigned long long int number){
	for (long int i = 2; i <= std::sqrt(number); i++)
	{
		if (number%i == 0)
			return false;
	}
	return true;
}
int main()
{
	std::vector<int> primes;
	for (int i = 2; i < MAX; i++)
	{
		if (isPrime(i))
		{
			primes.push_back(i);
		}
	}
	std::vector<std::vector<unsigned long long int> > sum;
	for (int i = 0; i < primes.size(); i++)
	{
		std::vector<unsigned long long int> v;
		v.push_back(primes[i]);
		for (int j = i + 1; j < primes.size(); j++)
		{
			int b = v.back() + primes[j];
			if (b < MAX)
				v.push_back(b);
			else
				break;
		}
		sum.push_back(v);
	}
	std::pair<unsigned long long int, int> result = std::make_pair(0, 0);
	for (int i = 0; i < sum.size(); i++)
	{
		for (int j = 0; j < sum[i].size(); j++)
		{
			if (sum[i][j]>result.first&&j + 1>result.second&&isPrime(sum[i][j]))
			{
				result.first = sum[i][j];
				result.second = j + 1;
			}
		}
	}
	std::cout <<"---> "<<  result.first <<" <---"<< std::endl << result.second << std::endl;
	return 0;
}

