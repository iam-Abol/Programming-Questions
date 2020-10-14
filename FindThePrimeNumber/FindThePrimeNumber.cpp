
#include <iostream>
int isPrimeNumber(int number){
	if (number > 1){
		for (int i = 2; i < number - 1; i++)
		{
			if (number%i == 0)
				return false;
		}
		return true;
	}
	else
		return false;
}
int main()
{
	int n;
	std::cin >> n;
	int m = n;
	int digits = 0;
	while (n != 0){
		digits += n % 10;
		n /= 10;
	}
	int t = 0;
	for (int i = m + 1; true; i++){
		if (isPrimeNumber(i))
			t++;
		if (t == digits){
			std::cout << i;
			return 0;
		}

	}
	return 0;
}

