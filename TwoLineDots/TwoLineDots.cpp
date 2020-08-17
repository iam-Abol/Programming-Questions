
#include <iostream>

int main()
{
	int numbers[4];
	for (int i = 0; i < 4; i++){
		std::cin >> numbers[i];
	}
	if (numbers[1] == numbers[3]){
		std::cout << "Horizontal";
	}
	else if (numbers[0] == numbers[2]){
		std::cout << "Vertical";
	}
	else{
		std::cout << "Try again";
	}
	return 0;
}

