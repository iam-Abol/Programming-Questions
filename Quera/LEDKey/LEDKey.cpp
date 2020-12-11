
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char numbers[n];
	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}
	int t=0;
	for (int i = 0; i < n; i++){
		if (numbers[i] == '0'){
			if (numbers[i + 1]=='1'){
				t++;
			}
		}
		if (numbers[i] =='1'){
			if (numbers[i + 1] == '0'){
				t++;
			}
		}
	}
	cout << t ;
	
	return 0;
}

