#include <iostream>
using namespace std;
int main()
{
	const int limit = 10000000;
	int *arr=new int[limit+1];
	for (int i = 0; i < limit; i++)
		arr[i] = 0;
	for (int i = 2; i <= limit/2; i++){
		for (int j = i; j < limit; j += i)
			arr[j]++;
	}
	int result = 0;
	for (int i = 1; i < limit; i++)
	{
		if (arr[i] == arr[i + 1])
			result++;
	}
	cout << result << endl;
	delete[] arr;
	return 0;
}

