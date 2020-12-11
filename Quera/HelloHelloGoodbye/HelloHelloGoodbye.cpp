#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	std::string *name = new std::string[n];
	for (int i = 0; i < n; i++){
		std::cin >> name[i];
	}
	for (int i = 1; i<n; i++){
		for (int j = i - 1; j>=0; j--){
			std::cout << name[i] << ": salam " << name[j]<<"!"<<std::endl;
		}
	}
	for (int i = 0; i < n; i++){
		std::cout << name[i] << ": khodafez bacheha!" << std::endl;
		for (int j = i + 1; j < n; j++){
			std::cout << name[j] << ": khodafez " << name[i] << "!" << std::endl;
		}
	}
	
	return 0;
}

