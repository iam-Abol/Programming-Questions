#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int *number = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> number[i];
	int result = 0;
	bool flag = true;
	for (int i = 1; i <= 1000; i++){
		for (int j = 0; j < n; j++){
			if (i%number[j] != 0){
				flag = false;
			}
		}
		if (flag == true){
			result++;

		}
		else{
			flag = true;
		}
	}
	std::cout << result ;
	return 0;
}

