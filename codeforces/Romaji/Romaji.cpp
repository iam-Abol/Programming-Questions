#include <iostream>
#include <string>
int main()
{
	std::string v = "auioe";
	std::string s;
	std::cin >> s;
	if (v.find(s[s.size() - 1]) == -1 && s[s.size() - 1] != 'n'){
		std::cout << "NO" << std::endl;
		return 0;
	}
	else{
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] == 'n')
				continue;
			if (v.find(s[i]) == -1 && v.find(s[i + 1]) == -1)
			{
				std::cout << "NO" << std::endl;
				return 0;
			}
		}
	}
	std::cout << "YES" << std::endl;
	return 0;
}

