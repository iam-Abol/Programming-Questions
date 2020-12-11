#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cin >> n;
	int sum=0;
	for (int i = 1; i < n; i++){
		if (n%i == 0){
			sum += i;
		}
	}
	if (sum == n){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	cout << endl;
	system("pause");
	return 0;
}

