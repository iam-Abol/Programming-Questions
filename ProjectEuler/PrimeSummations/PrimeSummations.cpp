#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0)
			return false;
	}
	return true;
}
int findNextPrime(int n){
	n++;
	while (1){
		if (isPrime(n))
			return n;
		n++;
	}
}
int main()
{
	vector<vector<int> > table;
	vector<int> primes;
	primes.push_back(2);
	vector<int> first; first.push_back(1); first.push_back(0); first.push_back(1); table.push_back(first);
	bool found = false;
	while (!found){
		int nextPrime = findNextPrime(primes[primes.size()-1]);
		primes.push_back(nextPrime);
		vector<int> row;
		row = table[table.size()-1];
		table.push_back(row);
		for (int i = table[0].size(); i <= nextPrime; i++){
			if (i % 2 == 0)
				table[0].push_back(1);
			else
				table[0].push_back(0);
		}
		for (int i = 1; i < table.size(); i++){
			for (int j = primes[primes.size() - 2] + 1; j <= nextPrime; j++){
				int newNumber=0;
				if (j<primes[i]){
					newNumber = table[i - 1][j];
				}
				else{
					newNumber = table[i - 1][j] + table[i][j - primes[i]];
				}
				
				if (newNumber>5000){
					found = true;
					cout << j << endl;
					break;
				}
					
				table[i].push_back(newNumber);
			}
			if (found)
				break;
		}
	}
	return 0;
}

