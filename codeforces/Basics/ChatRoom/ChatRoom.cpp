#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	const string hello = "hello";
	int index = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == hello[index])
			index++;
	}
	if (index == 5)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

