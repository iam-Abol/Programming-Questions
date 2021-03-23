#include <iostream>
using namespace std;
int gcd(int a, int b){
	if (a == 0)
		return b;
	return gcd(b%a, a);
}
int main()
{
	int result = 0;
	for (double d = 1; d <= 12000; d++)
	{
		for (double n = 1; n < d; n++)
		{
			if (gcd(n, d) == 1){
				if ((n / d)>(double)(1.0 / 3.0) && (n / d) < (double)(1.0 / 2.0))
					result++;
			}
		}
	}
	cout << result << endl;
	 
	return 0;
}

