
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool f(string all, string key){
	int in = 0;
	for (int i = 0; i < all.size(); i++){
		if (all[i] == key[in]){
			in++;
		}
		if (in == 3)
			return true;
	}
	return false;
}
int main()
{
	fstream input("keylog.txt");
	string key;
	string all = "";
	vector<string> keys;
	while (input){
		input >> key;
		for (int i = 0; i < 3; i++){
			bool f = true;
			for (int j = 0; j < all.size(); j++){
				if (key[i] == all[j]){
					f = false;
					break;
				}
			}
			if (f)
				all += key[i];
		}
		keys.push_back(key);
	}
	do{
		bool found = true;
		for (int i = 0; i < keys.size(); i++){
			if (f(all, keys[i]) == false){
				found = false;
				break;
			}
		}
		if (found)
			break;
	}while (next_permutation(all.begin(), all.end()));
	cout << all << endl;

	return 0;
}

