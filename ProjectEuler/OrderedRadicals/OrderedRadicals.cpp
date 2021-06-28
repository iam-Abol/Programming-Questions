#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int rad(int n){
	int result = 1;
	for (int i = 1; i <= n; i++){
		if (n%i==0){
			if (result%i!=0)
				result *= i;
			n /= i;
			i = 1;
		}
	}
	return result;
}
int main()
{
	vector<pair<int, int> > result;
	for (int i = 1; i <= 100000; i++)
	{
		result.push_back(make_pair(rad(i), i));
		
	}
	sort(result.begin(), result.end());
	cout << result[10000-1].second << endl;
	return 0;
}

