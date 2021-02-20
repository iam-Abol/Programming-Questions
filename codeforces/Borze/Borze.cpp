#include <iostream>
#include <string>
int main()
{
	std::string s;
	std::cin >> s;
	std::string result = "";
	if (s[0] == '.')
	{
		result += '0';
		s[0] = ' ';
	}
	
		for (int i = 1; i < s.size(); i++)
		{
			std::string r = s.substr(i-1,2);
			bool flag = true;
			if (r == " .")
			{
				flag = false;
				result += '0';
			}
			else if (r == "-.")
			{
				flag = false;
				result += '1';
			}
			else if (r == "--")
			{
				flag = false;
				result += '2';
			}
			if (flag == false){
				s[i] = s[i - 1] = ' ';
			}

		}
	
	std::cout << result;
	return 0;
}

