
#include <iostream>
#include <string>
void reverse(std::string &str){
	std::string reverse = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '0')
			reverse += "1";
		else
		{
			reverse += "0";
		}
	}
	str += reverse;
}
int main()
{
	int start, end;
	std::cin >> start >> end;
	std::string result = "1";
	while (result.size() <= end){
		reverse(result);
	}
	std::string substr = result.substr(start-1, end-start+1);
	std::cout << substr;
	return 0;
}

