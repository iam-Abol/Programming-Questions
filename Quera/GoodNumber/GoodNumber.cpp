
#include <iostream>
int count(int number){
	int t = 0;
	for (int i = 1; i <= number; i++){
		if (number%i == 0)
			t++;
	}
	return t;
}
int main()
{
	int k;
	std::cin >> k;
	int goodNumber = 0;
	for (int i = 1; true; i++){
		for (int j = i; j > 0; j--)
			goodNumber += j;
		
		if (count(goodNumber) >= k){
			std::cout << goodNumber ;
			return 0;
		}


		goodNumber = 0;
	}
	return 0;
}

