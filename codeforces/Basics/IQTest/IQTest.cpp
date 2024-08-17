#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int *number = new int[n];
	int odd = 0, even = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> number[i];
		if (number[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	if (odd == 1){
		for (int i = 0; i < n; i++)
		{
			if (number[i] % 2 == 1){
				std::cout << i + 1;
				break;
			}
		}
	}
	else if (even == 1){
		for (int i = 0; i < n; i++)
		{
			if (number[i] % 2 == 0)
			{
				std::cout << i + 1;
				break;
			}
		}
	}
	delete[] number;
	return 0;
}

