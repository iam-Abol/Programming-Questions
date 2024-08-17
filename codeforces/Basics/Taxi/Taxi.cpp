#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int arr[5] = { 0, 0, 0, 0, 0 };
	std::cin >> n;
	int number;
	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		arr[number]++;
	}
	int numberOfCars = arr[4]; arr[4] = 0;
	if (arr[3]>arr[1])
	{
		arr[3] -= arr[1];
		numberOfCars += arr[1];
		arr[1] = 0;
		numberOfCars += arr[3];
		arr[3] = 0;
		numberOfCars += arr[2] / 2;
		arr[2] %= 2;
		numberOfCars += arr[2];
	}
	else
	{
		arr[1] -= arr[3];
		numberOfCars += arr[3];
		arr[3] = 0;
		if (arr[1] % 2 == 1)
		{
			arr[1]--;
			arr[2]++;
		}
		arr[1] /= 2;
		arr[2] += arr[1];
		arr[1] = 0;
		if (arr[2] % 2 == 0)
			numberOfCars += arr[2] / 2;
		else
			numberOfCars += (arr[2] / 2)+1;
	}
	std::cout << numberOfCars << std::endl;
	return 0;
}

