#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
int _tmain(int argc, _TCHAR* argv[])
{
	std::vector<std::vector<int> > triangle;
	std::fstream input("triangle.txt");
	for (int i = 0; i < 100; i++)
	{
		std::vector<int> row;
		std::string number;
		for (int j = 0; j <= i; j++)
		{
			input >> number;
			row.push_back(std::stoi(number));
		}
		triangle.push_back(row);
	}
	for (int i = triangle.size() - 2; i >= 0; i--){
		
		for (int j = 0; j < triangle[i].size(); j++)
		{
			triangle[i][j] += triangle[i + 1][j]>triangle[i + 1][j + 1] ? triangle[i + 1][j] : triangle[i + 1][j + 1];
		}
	}
	std::cout << triangle[0][0] << std::endl;
	return 0;
}

