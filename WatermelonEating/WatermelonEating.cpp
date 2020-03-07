
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *watermelonWeight = new int[n];
	for (int i = 0; i < n; i++){
		cin >> watermelonWeight[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++){
		if (watermelonWeight[i]>max){
			max = watermelonWeight[i];
		}
	}
	int indexOfMaximum = 0;
	for (int i = 0; i < n; i++){
		if (watermelonWeight[i] == max){
			indexOfMaximum = i;
		}
	}
	cout << indexOfMaximum + 1 ;
	
	return 0;
}

