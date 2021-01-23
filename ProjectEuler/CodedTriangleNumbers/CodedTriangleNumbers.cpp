#include <iostream>
#include <string>
#include <fstream>
#include <set>
float t(float n){
	return (n / 2)*(n + 1);
}
int isTriangle(std::string name){
	int sum = 0;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] != '"'&&name[i] != ',')
			sum += (name[i] - 64);
	}
	return sum;
}
int main()
{
	std::set<int> triangleNumber;
	for (int i = 1;; i++)
	{
		int r = t(i);
		if (r < 500)
			triangleNumber.insert(r);
		else
			break;
	}
	int result = 0;
	std::fstream input("words.txt");
	std::string names;
	input >> names;
	for (int i = 0; i < names.size(); i++)
	{
		std::string name;
		while (names[i] != ',')
		{
			name += names[i];
			i++;
		}
		if (triangleNumber.find(isTriangle(name)) != triangleNumber.end())
		{
			result++;
		}
	}
	std::cout << result << std::endl;
	return 0;
}

