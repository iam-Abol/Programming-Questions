#include <iostream>


int main()
{
	int n;
	std::cin >> n;
	std::string *channel = new std::string[n];
	int x, k;
	std::cin >> x >> k;
	for (int i = 0; i < n; i++){
		std::cin >> channel[i];
	}
	int result = x - 1;

	for (int i = 0; i < k; i++){
		
		if (result == n - 1){
			result = 0;
		}
		else{
			result++;
		}

	}
	std::cout << channel[result] ;
	delete[] channel;
	system("pause");
	return 0;
}

