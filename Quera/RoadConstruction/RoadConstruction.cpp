
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	if (n % 2 == 0){
		std::cout << ((n / 2) + 1)*((n / 2) + 1) ;
	}
	else{
		std::cout << ((n / 2) + 1)*((n / 2) + 2) ;
	}

	return 0;
}

