
#include <iostream>
#include <string>

int main()
{
	std::string str[5];
	for (int i = 0; i < 5; i++)
		std::cin >> str[i];
	bool notFound = true;
	

	
	for (int i = 0; i < 5; i++){
		int result=str[i].find("HAFEZ");
		int result2 = str[i].find("MOLANA");
		if (result >= 0 && result < 20 || result2 >= 0 && result2 <= 20){
			std::cout << i + 1 << " ";
			notFound = false;
		}
	}
	if (notFound == true){
		std::cout << "NOT FOUND!";
	}
	

	return 0;
}

