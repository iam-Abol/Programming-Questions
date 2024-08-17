#include <iostream>
int main()
{
	int number;
	std::cin >> number;
	for (int i = 2; i <= number; i += 2){
		for (int j = 2; j <= number; j+=2){
			if (i + j == number){
				std::cout << "YES";
				return 0;
			}	
		}
	}
	std::cout << "NO";
	return 0;
}

