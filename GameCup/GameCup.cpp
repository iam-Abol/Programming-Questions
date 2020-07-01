#include<iostream>

int main(){
	int size;
	char first;
	std::cin>>size>>first;
	
	
	char array[size][2];
	for(int i=0;i<size;i++){
		for(int j=0;j<2;j++){
			std::cin>>array[i][j];
		}
	}

	char result=first;
	for(int i=0;i<size;i++){
		if(array[i][1]==result){
			result=array[i][0];
		}
	 else if(array[i][0]==result){
		result=array[i][1];
	}
	}
	std::cout<<result<<std::endl;
	return 0;
}