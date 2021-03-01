#include <iostream>
#include <string>
std::string reverse(std::string s){
	int e = s.size() - 1;
	int b = 0;
	while (b<e)
	{
		char c = s[e];
		s[e] = s[b];
		s[b] = c;
		e--;
		b++;
	}
	return s;
}
int main()
{
	std::string s;
	while (std::getline(std::cin, s))
	{
		std::string w = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' '){
				
				std::cout << reverse(w) << " ";
				w = "";
			}
			else w += s[i];
		}
		std::cout << reverse(w) << std::endl;
	}
	return 0;
}

