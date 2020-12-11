#include <iostream>
#include <cmath>
int main()
{
	float n, m;
	std::cin >> n >> m;

	for (int i = 0; i < m; i++){
		n /= 2;

	}
	std::cout << std::floor(n) ;
	return 0;
}

