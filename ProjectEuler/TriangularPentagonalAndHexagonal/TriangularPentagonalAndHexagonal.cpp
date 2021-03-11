#include <iostream>
#include <cmath>
bool isPentagonal(long long int N)
{
	double n = (1 + std::sqrt(24 * N + 1)) / 6;
	return (n - (int)n) == 0;
}
int main()
{
	long result = 0;
	int i = 143;

	while (true) {
		i++;
		result = i * (2 * i - 1);

		if (isPentagonal(result)) {
			break;
		}
	}
	std::cout<<result<<std::endl;
	return 0;
}

