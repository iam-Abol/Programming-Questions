#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	std::sort(&arr[0], &arr[n]);
	int result = 0;
	int sum2 = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		sum2 += arr[i];
		if (sum2>(sum - sum2))
		{
			result = n - i ;
			break;
		}
	}
	std::cout << result << std::endl;
	delete[] arr;
	return 0;
}

