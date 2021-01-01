#include <iostream>
#include <string>
int main()
{
	int n;
	std::cin >> n;
	std::string word;
	std::string result="";
	for (int i = 0; i < n; i++)
	{
		std::cin >> word;
		if (word.size()>10){
			result += word[0] + std::to_string(word.size() - 2) + word[word.size() - 1];
		}
		else{
			result += word;
		}
		result += "\n";
	
	}
	std::cout << result;
	return 0;
}

