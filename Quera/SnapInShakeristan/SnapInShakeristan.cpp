#include <iostream>


int main() {
	int n,m;
	std::cin>>n>>m;
	int array[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			std::cin>>array[i][j];
		}
	}
	int time[m][2];
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++){
			std::cin>>time[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		sum+=array[time[i][0]-1][time[i][1]-1];
	}
	std::cout<<sum;
	return 0;
}
