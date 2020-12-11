#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int j = n / 4;
	int b = n % 4;
	if (n == 1){
		cout << "0 0";
	}
	else if (b == 0){
		cout << "-" << j << " " << j;
	}
	else if (b == 1){
		cout << "-" << j << " -" << j;
	}
	else if (b == 2){
		cout << j + 1 << " -" << j;
	}
	else if (b == 3){
		cout << j << " " << j;
	}
	return 0;
}

