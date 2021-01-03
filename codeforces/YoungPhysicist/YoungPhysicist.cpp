#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int **number = new int*[n];
	for (int i = 0; i < n; i++)
	{
		number[i] = new int[3];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> number[i][j];
		}
	}
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < n; i++)
		{
			sum += number[i][j];
		}
		if (sum != 0){
			std::cout << "NO";
			for (int i = 0; i < n; i++)
			{
				delete[] number[i];
			}
			delete[] number;
			return 0;
		}
	}
	std::cout << "YES";


	for (int i = 0; i < n; i++)
	{
		delete[] number[i];
	}
	delete[] number;
	return 0;
}

