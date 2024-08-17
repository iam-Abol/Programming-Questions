#include <iostream>
int main()
{
	int n, k;
	std::cin >> n >> k;
	int *number = new int[n];
	k--;
	for (int i = 0; i < n; i++)
	{
		std::cin >> number[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		if (number[i]>=number[k]&&number[i]>0)
			result++;
	}
	std::cout << result;
	return 0;
}

