#include <iostream>
using namespace std;
int main()
{
	int s = 0;
	for (int i = 1000000; i >= 0; i--)
	{
		if (i % 7 == 0)
		{
			s = i;
			break;
		}
	}
	s /= 7;
	cout << s * 3 - 1 << endl;
	return 0;
}

