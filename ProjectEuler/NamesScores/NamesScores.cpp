#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
int calculateScore(std::string name){
	int result = 0;
	for (int i = 0; i < name.size(); i++){

		result += name[i] - 64;
	}
	return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
	std::string allInfo = "";
	std::ifstream read("names.txt");
	read >> allInfo;
	std::string name = "";
	int counter = 1;
	long long int result = 0;
	std::vector <std::string> names;
	for (int i = 0; i < allInfo.size(); i++)
	{
		while (allInfo[i] != ','){
			if (allInfo[i] != '"')
				name += allInfo[i];
			i++;
		}
		names.push_back(name);
		
		name = "";
	}
	std::sort(names.begin(), names.end());
	for (int i = 0; i < names.size(); i++)
	{
		result += calculateScore(names[i])*(i + 1);
	}
	std::cout << result ;
	return 0;
}

