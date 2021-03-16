#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
std::vector<unsigned long long int> find(std::vector<std::pair<std::string, long long int> > v){
	for (int i = 0; i < v.size() - 4; i++)
	{
		bool f = true;
		for (int j = i; j < i + 5; j++)
		{
			if (v[i].first != v[j].first)
			{
				f = false;
				break;
			}
		}
		if (f){

			std::vector<unsigned long long int> result;
			for (int j = i; j < i + 5; j++)
			{
				result.push_back(v[j].second);

			}
			return result;
		}

	}
}
int main()
{
	std::vector<std::pair<std::string, long long int> > v;
	for (int i = 1; i < 10000; i++)
	{
		v.push_back(std::make_pair("0", i));
	}
	for (int i = 0; i < v.size(); i++)
	{
		v[i].first = std::to_string(v[i].second*v[i].second*v[i].second);
	}
	for (int i = 0; i < v.size(); i++)
	{
		std::sort(v[i].first.begin(), v[i].first.end());
	}
	std::sort(v.begin(), v.end());
	std::vector<unsigned long long int> result = find(v);
	std::cout << result[0]*result[0]*result[0]<< std::endl;
	return 0;
}

