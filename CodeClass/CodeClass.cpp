#include <iostream>
int main()
{
	int index;
	std::cin >> index;
	std::string result="";
	for (int i = 1; result.size() <= index; i++){
		result +=std::to_string(i);
	
	}
	std::cout << result[index-1] ;
	return 0;
}

