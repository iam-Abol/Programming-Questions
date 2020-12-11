
#include <iostream>

int main()
{
	int n, max;
	std::cin >> n >> max;
	int *number = new int[n];
	for (int i = 0; i < n; i++){
		std::cin >> number[i];
	}

	int j = 0;
	int sum = 0;
	int result = 0;
	while (j < n){

		while (sum + number[j] <= max&&j < n){
			sum += number[j];
			j++;
		}
		
		sum = 0;
		result++;
	}

	std::cout << result;
	delete[] number;
	return 0;
}

