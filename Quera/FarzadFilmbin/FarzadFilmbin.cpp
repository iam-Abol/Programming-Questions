
#include <iostream>
char uppercase(char a){
	
	int b = a - 32;

	return b;
}
char lowercase(char a){
	int b = a + 32;

	return b;
}
int main()
{
	
	int n;
	std::cin >> n;
	
	//std::string* name = new std::string[n];
	std::string *name=new std::string[n];
	std::cin.get();
	for (int i = 0; i < n; i++){
		
		std::getline(std::cin, name[i]);
		
	}
	
	for (int i = 0; i < n; i++){
		if (name[i][0] >= 97 && name[i][0] <= 122){
			name[i][0]=uppercase(name[i][0]);
		}
		for (int j = 1; j < name[i].size(); j++){
			if (name[i][j - 1] == ' '){
				if (name[i][j] >= 97 && name[i][j] <= 122){
					

					name[i][j] = uppercase(name[i][j]);
				}
			}
			else{
				if (name[i][j] >= 65 && name[i][j] <= 90){
					name[i][j] = lowercase(name[i][j]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++){
		std::cout << name[i] << std::endl;;
	}
	
	return 0;
}

