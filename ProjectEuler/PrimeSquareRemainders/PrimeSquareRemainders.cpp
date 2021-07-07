#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long int n){
	for (long long int i = 2; i <= sqrt(n); i++){
		if (n%i == 0)
			return false;
	}
	return true; 
}
long long int f(long long int prime, long long int n){
	long long int mod = prime*prime;
	
	long long int s1 = 1;
	for (long long int i = 0; i < n; i++){
		s1 *= (prime - 1);
		s1 %= mod;
	}
	long long int s2 = 1;
	for (long long int i = 0; i < n; i++){
		s2 *= (prime +1);
		s2 %= mod;
	}
	long long int result = s1 + s2;
	return result%mod;
}
int main()
{
	long long int n = 0;
	for (long long int i = 2;; i++){
		if (isPrime(i)){
			n++;
			long long int r = f(i, n);
			if (r > 10000000000)
			{
				cout << n << endl;
				break;
			}
		}
	}
	return 0;
}

