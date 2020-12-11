
#include <iostream>

void isGood(std::string str){

	for (int i = 0; i < str.size(); i++){
		std::string word = "";
		for (; str[i] == str[i + 1]; i++)
			word += str[i];
		word += str[i];
		if (word.size() % 2 == 1){
			std::cout << "bad";
			return;
		}

	}
	std::cout << "khoob";

}
int main()
{
	std::string letter;
	std::cin >> letter;

	isGood(letter);

	return 0;
}

