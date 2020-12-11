#include <iostream>

using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if (b>=a) {
		cout<<"Wrong order!";
	}
	int y=a-b;
	if(y%2==1) {
		cout<<"Wrong difference!";
	} else {
		int x=y/2;
		for(int i=1; i<=x; i++) {
			for(int d=0; d<a; d++) {
				cout<<"* ";
			}
			cout<<endl;
		}
		for(int i=0; i<b; i++) {
			for(int h=0; h<x; h++) {
				cout<<"* ";
			}
			for(int h=0; h<b; h++) {
				cout<<"  ";
			}
			for(int h=0; h<x; h++) {
				cout<<"* ";
			}
			cout<<endl;
		}
		for(int i=1; i<=x; i++) {
			for(int d=0; d<a; d++) {
				cout<<"* ";
			}
			cout<<endl;
		}
	}

	return 0;
}
