

#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	char array[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			std::cin >> array[i][j];
	}
	int result = 0;



	for (int i = 0; i < n; i++){
		for (int j = 1; j < m; j++){
			if (array[j][i] != array[j - 1][i]){

				result++;
			}

		}

		result++;


	}



	std::cout << result ;

	return 0;
}

