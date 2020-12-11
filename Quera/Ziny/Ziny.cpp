


#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	
	int numbers[n][m];
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			std::cin >> numbers[i][j];
		}
	}
	int t = 0;
	for (int i = 1; i<n-1 ; i++){
		for (int j = 1; j<m-1 ; j++){
			if (numbers[i][j]<numbers[i][j - 1] && numbers[i][j]<numbers[i][j + 1] && numbers[i][j]>numbers[i + 1][j] && numbers[i][j]>numbers[i - 1][j]){

				t++;
			}
			if (numbers[i][j]>numbers[i][j - 1] && numbers[i][j]>numbers[i][j + 1] && numbers[i][j]<numbers[i + 1][j] && numbers[i][j]<numbers[i - 1][j]){
				t++;
			}
		}
	}
	std::cout << t ;
	
	return 0;
}

