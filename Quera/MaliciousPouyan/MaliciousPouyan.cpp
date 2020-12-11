#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	int i;
	for (i = 1; (m*i) % n > n / 2 ; i++){
	}
	std::cout << m*i ;
	
	return 0;
}

