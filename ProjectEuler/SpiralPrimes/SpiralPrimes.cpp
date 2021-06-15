#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true;
}
double percent(double numberOfPrimes,double numberOfAll){
	double result=100/numberOfAll*numberOfPrimes;
	return result;
}
int  main() {
	int numberOfPrimes=0, numberOfAll=1;
	int r=2;
	for(int i=1;;){
		for(int j=0;j<4;j++){
			i+=r;
			numberOfAll++;
			if(isPrime(i))
				{
					numberOfPrimes++;
				}
		}
		if(percent(numberOfPrimes,numberOfAll)<10.0){
			cout<<r+1<<endl;
			break;
		}
		r+=2;
	}
	
	return 0;
}

