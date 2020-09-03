#include <iostream>


int main() {
	float number[3];
	std::cin>>number[0]>>number[1]>>number[2];
	float Average=(number[0]+number[1]+number[2])/3;
	int t=0;
	for(int i=0;i<3;i++){
		if(number[i]<Average){
			t++;
		}
	}
	std::cout<<t;
	return 0;
}
