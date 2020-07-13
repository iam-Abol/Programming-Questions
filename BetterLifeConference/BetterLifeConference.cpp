


#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	
	int n1;
	if (m > 10){
		std::cout << "Left ";
		n1 = 21 - m;
	}
	else if(m<=10){
		std::cout << "Right ";
		n1 = m;
	}
	std::cout << 11 - n<<" ";
	std::cout << n1;
	
	return 0;
}

