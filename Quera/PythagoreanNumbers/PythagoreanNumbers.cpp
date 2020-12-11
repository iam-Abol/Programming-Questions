
#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	bool flag = false;
	if ((a*a) + (b*b) == (c*c))
		flag = true;
	if ((b*b) + (c*c) == (a*a))
		flag = true;
	if ((c*c) + (a*a) == (b*b))
		flag = true;

	if (flag == false)
		std::cout << "NO";
	else
		std::cout << "YES";
	return 0;
}

