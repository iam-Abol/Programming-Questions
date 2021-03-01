#include <iostream>
#include <string>
int main()
{
	std::string text;
	std::getline(std::cin, text);
	int flag = 1;
	std::string result = "";
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == '"'){
			if (flag == 1){
				result += "``";
				flag++;
			}
			else{
				result += "''";
				flag--;
			}
		}
		else{
			result += text[i];
		}
	}
	std::cout << result << std::endl;
	return 0;
}

