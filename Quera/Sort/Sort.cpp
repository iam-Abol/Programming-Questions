#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *CoinLayout = new int[n];
	for (int i = 0; i < n; i++){
		cin >> CoinLayout[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += CoinLayout[i];
	}
	int goodSize = sum / n;
	int Minutes = 0;
	for (int i = 0; i < n; i++){
		if (CoinLayout[i] < goodSize){
			Minutes += goodSize - CoinLayout[i];
		}
	}
	cout << Minutes ;

	return 0;
}
