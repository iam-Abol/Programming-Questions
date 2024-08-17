#include <iostream>

std::string lowerCase(std::string str){
	std::string result = "";
	for (int i = 0; i < str.size(); i++)
	{
		int c = str[i];
		if (c < 97)
			c += 32;
		char a = c;
		result += a;
	}
	return result;
}

int main()
{

	std::string first, second;
	std::cin >> first >> second;
	first = lowerCase(first);
	second = lowerCase(second);
	int sum1, sum2;
	sum1 = sum2 = 0;
	for (int i = 0; i < first.size(); i++)
	{
		int a, b;
		a = first[i];
		b = second[i];
		if (a < b)
		{
			std::cout << -1;
			return 0;
		}
		 if (b < a){
			std::cout << 1;
			return 0;
		}
		

	}
	std::cout << 0;
	return 0;
}

