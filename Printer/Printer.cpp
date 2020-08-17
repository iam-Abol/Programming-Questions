
#include <iostream>

int main()
{
	int n, m;
	std::cin >> n>>m;
	std::string str1="", str2="";


	for (int i = 0; i < m; i++){
		str1 += "X";
	}
	for (int i = 0; i < m; i++){
		str1 += ".";
	}
	for (int i = 0; i < m; i++){
		str1 += "X";
	}
	


	for (int i = 0; i < m; i++){
		str2 += ".";
	}
	for (int i = 0; i < m; i++){
		str2 += "X";
	}
	for (int i = 0; i < m; i++){
		str2 += ".";
	}
	

	for (int i = 0; i < n; i++){
		std::cout << str1 << std::endl;
	}
	for (int i = 0; i < n; i++){
		std::cout << str2 << std::endl;
	}
	for (int i = 0; i < n; i++){
		std::cout << str1 << std::endl;
	}
	
	return 0;
}

