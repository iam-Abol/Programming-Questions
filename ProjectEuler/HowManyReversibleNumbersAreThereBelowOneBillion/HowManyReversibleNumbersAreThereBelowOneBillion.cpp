#include <iostream>
using namespace std;
int rev(int n){
	int result = 0;
	while (n){
		result *= 10;
		result += n % 10;
		n /= 10;
	}
	return result;
}
bool check(int n, int r){
	int result = n + r;
	while (result){
		if (result % 2 == 0)
			return false;
		result /= 10;
	}
	return true;
}
int main()
{
	char *numbers = new char[1000000000];
	for (int i = 0; i < 1000000000; i++)
		numbers[i] = '.';
	for (int i = 1; i < 1000000000; i++){
		if (i % 10 == 0)
			continue;
		if (numbers[i] == '.'){
			int r = rev(i);
			bool f = check(i, r);
			if (f){
				numbers[i] = 't';
				numbers[r] = 't';
			}
			else{
				numbers[i] = 'f';
				numbers[r] = 'f';
			}

		}

	}
	int result = 0;
	for (int i = 0; i < 1000000000; i++){
		if (numbers[i]=='t')
			result++;
	}
	cout << result << endl;
	delete[] numbers;
	
	return 0;
}

