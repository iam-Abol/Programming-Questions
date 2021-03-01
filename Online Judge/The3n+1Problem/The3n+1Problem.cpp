#include <iostream>
int f(int n)
{
	int i = 1;

	while (n != 1){
		if (n % 2 == 0){
			n = n / 2;
		}
		else{
			n = 3 * n + 1;
		}
		i++;
	}
	return i;
}
int main()
{
	int i, j;

	while (std::cin >> i >> j){
		std::cout << i << " " << j << " ";
		if (i>j){
			int t = i;
			i = j;
			j = t;
		}
		int max = f(i);
		for (int k = i + 1; k <= j; k++) {
			int temp = f(k);
			if (temp > max)
				max = temp;
		}
		std::cout << max << std::endl;
	}
	return(0);
}

