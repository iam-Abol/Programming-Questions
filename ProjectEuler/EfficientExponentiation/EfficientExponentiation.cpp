#include "stdafx.h"
#include <iostream>
#include <tuple>
#include <set>
#include <vector>
using namespace std;
int results[201];
void recursiveFind(int number, int depth,vector<int> path){
	if (depth > results[number] || number > 200)
		return;
	results[number] = depth;
	path.push_back(number);
	for (int i = path.size()-1; i >=0 ; i--){
		
		recursiveFind(number + path[i], depth + 1, path);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 201; i++)
		results[i] = INT_MAX;
	vector<int> path;
	recursiveFind(1, 0,path);
	int result = 0;
	for (int i = 1; i < 201; i++)
		result += results[i];
	cout << result << endl;
	return 0;
}
