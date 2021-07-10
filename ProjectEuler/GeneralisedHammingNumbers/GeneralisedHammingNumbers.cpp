#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const int limit = 1000000000, type = 100;
int result = 0;
vector<pair<int, int> > prime;
bool isPrime(int n){
	for (int i = 2; i <= std::sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
void findPrimes(int type){
	for (int i = 2; i <= type; i++){
		if (isPrime(i)){
			int second = log(limit) / log(i);
			prime.push_back({ i, second });
		}
	}
}
void solve(int i, unsigned long long int number){
	if (i == prime.size()){
		if (number <= limit){
			result++;
		}
		return;
	}

	if (number > limit)
		return;
	unsigned long long int t = 1;
	for (int j = 0; j <= prime[i].second; j++){
		solve(i + 1, t*number);
		t *= prime[i].first;

	}
}
int main()
{
	findPrimes(type);
	solve(0, 1);
	cout << result << endl;
	return 0;
}
