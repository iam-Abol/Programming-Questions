#include <iostream>
#include <string>
#include <cmath>
bool f(int i, int j){
	std::pair<double, int> p=std::make_pair(1,0);
	for (int k = 0; k < j; k++)
	{
		p.first *= i;
		if (p.first>10){
			while (p.first>10)
			{
				p.first /= 10;
				p.second++;
			}
		}
	}



	if (p.second + 1 == j)
		return true;
	else
		return false;
}
int main()
{
	int result = 0;
	for (unsigned long long int i = 1; i < 10; i++)
	{
		
		for (unsigned long long int j = 1; j < 22; j++)
		{
			if (f(i, j))
				result++;
		}

	}
	std::cout << result << std::endl;
	return 0;
}

