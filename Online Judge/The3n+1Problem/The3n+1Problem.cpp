#include <iostream>
int f(int n){
	int r = 1;
	while (n != 1)
	{
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		r++;
	}
	return r;
}

int main()
{
	int i, j;
	std::cin >> i >> j;
	std::cout << i << " " << j << " ";
	int max = 0;
	for (int k = i; k <= j; k++)
	{
		int m = f(k);
		if (m > max)
			max = m;
	}
	std::cout << max << std::endl;

	return 0;
}

