#include <iostream>
#include <cmath>
int numberOfRectangles(int x, int y){
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			sum += (x - i)*(y - j);
		}
	}
	return sum;
}
const int t = 2000000;
int main()
{
	int min = 2500000;
	int area = 0;
	for (int x = 1; x < 2000; x++)
	{
		for (int y = x; y < 2000; y++)
		{
			int numberOfrec = numberOfRectangles(x, y);

			if (std::abs(numberOfrec - t) < min)
			{
				min = std::abs(numberOfrec - t);
				area = x*y;
			}


			if (numberOfrec>t)
				break;
		}

	}
	std::cout << area << std::endl;
	return 0;
}

