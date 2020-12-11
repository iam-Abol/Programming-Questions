#include <iostream>
int main()
{
	std::string str[7];
	for (int i = 0; i < 7; i++){
		std::cin >> str[i];
	}
	int numberOfResults = 0;
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			if (str[i][j] == '.'){
				if (i>1){
					if (str[i - 1][j] == 'o'&&str[i - 2][j] == 'o'){
						numberOfResults++;
					}
				}

				if (i < 5){
					if (str[i + 1][j] == 'o'&&str[i + 2][j] == 'o'){
						numberOfResults++;
					}
				}

				if (j<5){
					if (str[i][j + 1] == 'o'&&str[i][j + 2] == 'o'){
						numberOfResults++;
					}
				}

				if (j > 1){
					if (str[i][j - 1] == 'o'&&str[i][j - 2] == 'o'){
						numberOfResults++;
					}
				}

			}

		}
	}
	std::cout << numberOfResults ;
	
	return 0;
}

