#include "stdafx.h"
#include <iostream>
using namespace std;
class hasani{
	int n;
	int k;
public:

	void input(){
		cin >> n >> k;

	}

	int tedad(){
		int t = 0;
		int i = 1; 
		while (true) {

			i += k;
			if (i >=n){
				i -= n;
				t++;

			}

			else{
				t++;
			}


			if (i == 1){
				return t;
				break;
			}


		}
		
		
	}

};
int _tmain(int argc, _TCHAR* argv[])
{
	hasani obj;
	while (1){
		obj.input();
		int b = obj.tedad();
		cout << b << endl;
	}
	system("pause");
	return 0;
}

