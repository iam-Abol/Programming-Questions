
#include <iostream>

int main()
{
	int size;
	std::cin >> size;
	std::string *name = new std::string[size];
	std::string lastName;
	for (int i = 0; i < size; i++){
		std::cin >> name[i];
		std::cin >> lastName;
	}
	int max = 1;
	int t = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			if (name[i] == name[j]){
				t++;
			}
		}
		if (t>max){
			max = t;
		}
		t = 0;
	}
	std::cout << max;
	delete[] name;

	return 0;
}

