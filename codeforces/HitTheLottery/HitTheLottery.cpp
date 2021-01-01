#include <iostream>

int main()
{
	int number; 
	std::cin >> number;
	int result = 0;
	while (number != 0){
		if (number >= 100){
			result += number / 100;
			number %= 100;
		}
		if (number >= 20){
			result += number / 20;
			number %= 20;
		}
		if (number >= 10){
			result += number / 10;
			number %= 10;
		}
		if (number >= 5){
			result += number / 5;
			number %= 5;
		}
		if (number >= 1){
			result += number / 1;
			number %= 1;
		}
	}
	std::cout << result ;
	return 0;
}

