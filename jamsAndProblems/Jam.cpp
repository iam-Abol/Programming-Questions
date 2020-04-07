
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int* jam =new int[n];
	for (int i =0 ; i < n; i++){
		cin >> jam[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += jam[i];
	}
	int sumofAll = m*n;
	sumofAll -= sum;
	int answer = sumofAll / m;
	cout << answer;
	return 0;
}

