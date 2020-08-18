#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int fact = 1;
	if (n == 0)
		std::cout << 0;
	else{
		for (int i = 1; i <= n; i++){
			fact *= i;
		}
		std::cout << fact ;
	}
	
	return 0;
}