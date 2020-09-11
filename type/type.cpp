#include <iostream>
#include <list>
int main()
{
	std::list <char> sentence;
	std::string str;
	std::getline(std::cin, str);
	for (int i = 0; i < str.size(); i++){
		if (str[i] != '=')
			sentence.push_back(str[i]);
		else{
			if (!sentence.empty()){
				sentence.pop_back();
			}
		}
	}
	for (;sentence.empty()==false;){
		std::cout << sentence.front();
		sentence.pop_front();
	}



	return 0;
}

