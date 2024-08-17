#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	std::string *str = new std::string[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> str[i];
	}
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i].find("++") != -1)
			x++;
		else if (str[i].find("--") != -1)
		{
			x--;
		}
	}
	std::cout << x;
	delete[] str;
	return 0;
}

