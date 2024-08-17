#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	unsigned long long int n;
	cin >> n;

	long long int arr[n];
	long long int min=INT_MAX,max=0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];

	}
	
	

	long long int numberOfMaxs = 0, numberOfMins = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == min)
			numberOfMins++;
	
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] == max)
			numberOfMaxs++;
	
	
	}
	
	
	cout << max - min;
	if(min==max)
		cout<<" "<<n*(n-1)/2<<endl;
	else
		cout << " " << numberOfMins*numberOfMaxs << endl;

	return 0;
}
