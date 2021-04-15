#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isPrime(int n){
	if(n==2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
bool f(vector<int> v,int n){
	for(int i=0;i<v.size();i++){
		if(n-v[i]<0)
			return false;
		if(isPrime(n-v[i]))
			return true;
	}
	return false;
}
int main(int argc, char** argv) {
	vector<int> squares;
	for(int i=1;i<=10000;i++){
		squares.push_back(i*i*2);
	}
	for(int i=3;;i+=2){
		
		if(isPrime(i)==false&&f(squares,i)==false)
		{
			cout<<i<<endl;
			break;
		}
	}
	
	return 0;
}
