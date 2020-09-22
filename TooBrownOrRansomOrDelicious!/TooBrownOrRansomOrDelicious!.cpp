#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a % 2 == 0){
		a = 0;
	}
	else{
		a = 1;
	}
	if (b % 2 == 0){
		b = 0;
	}
	else{
		b = 1;
	}
	if (c % 2 == 0){
		c = 0;
	}
	else{
		c = 1;
	}
	while (a + b + c > 1)
	{
		if (a == 1 && b == 1){
			a = 0;
			b = 0;
			c++;
			if (c == 2)
				c = 0;
		}
		if (a == 1 && c == 1){
			a = 0;
			c = 0;
			b++;
			if (b == 2)
				b = 0;
		}
		if (b == 1 && c == 1){
			b = 0;
			c = 0;
			a++;
			if (a == 2)
				a = 0;
		}
	}
	if (a == 0)
		std::cout << "NO ";
	else
		std::cout << "YES ";
	if (b == 0)
		std::cout << "NO ";
	else
		std::cout << "YES ";
	if (c == 0)
		std::cout << "NO ";
	else
		std::cout << "YES ";

	return 0;
}

