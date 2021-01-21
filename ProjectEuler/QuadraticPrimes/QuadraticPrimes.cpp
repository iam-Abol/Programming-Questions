#include <iostream>
#include <cmath>
bool isPrime(int n){
	if (n < 2)
		return false;
	for (int i = 2; i <= std::sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int numberOfConsecutivePrimes(long long int a, long long int b){
	int max = 0;
	for (int n = 0;; n++)
	{
		if (isPrime(std::pow(n, 2) + (a*n) + b))
			max++;
		else
			return max;
	}
}
int main()
{
	std::pair<int, int> result=std::make_pair(0,0);
	int max = 0;
	for (int a = -999; a < 1000; a++)
	{
		for (int b = -1000; b <=1000 ; b++)
		{
			int r = numberOfConsecutivePrimes(a, b);
			if (r>max){
				max = r;
				result = std::make_pair(a, b);
			}
			

		}

	}
	std::cout << result.first*result.second << std::endl;
	return 0;
}

