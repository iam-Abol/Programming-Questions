
#include <iostream>

int main()
{
	int m1, m2, d1, d2;
	std::cin >> m1 >> d1 >> m2 >> d2;
	int sum1 = 0, sum2 = 0;
	if (m1 <= 6)
		sum1 += (m1 - 1) * 31;
	else
		sum1 += 6 * 31 + (m1 - 7) * 30;
	if (m2 <= 6)
		sum2 += (m2 -1) * 31;
	else
		sum2 += 6 * 31 + (m2 - 7) * 30;
	sum1 += d1;
	sum2 += d2;
	std::cout << sum2 - sum1;
	return 0;
}

