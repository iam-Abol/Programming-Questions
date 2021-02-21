#include <iostream>
int f(int a, int b){
	if (a > b){
		int t = a;
		a = b;
		b = t;
	}
	int r=0;
	while (a*2<b)
	{
		a *= 2;
		r++;
	}
	return r;
}
int main()
{
	int t;
	std::cin >> t;
	int *arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		int n;
		std::cin >> n;
		int first, second;
		int result = 0;
		std::cin >> first;
		for (int i = 1; i < n; i++)
		{
			std::cin >> second;
			result += f(first, second);
			first = second;

		}
		arr[i] = result;
	}
	for (int i = 0; i < t; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
	return 0;
}

