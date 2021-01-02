#include <iostream>
std::string lowerCase(std::string str){
	std::string result = "";
	for (int i = 0; i < str.size(); i++)
	{
		int c = str[i];
		if (c <= 90){
			char b = c + 32;
			result += b;
		}
		else{
			result += str[i];
		}
	}
	return result;
}
std::string deleteVowels(std::string str){

	std::string result = "";
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
			continue;
		result += str[i];
	}
	return result;
}
int main()
{
	std::string str;
	std::cin >> str;
	str = lowerCase(str);
	str = deleteVowels(str);
	for (int i = 0; i < str.size(); i++)
	{
		std::cout << '.' << str[i];
	}
	return 0;
}

