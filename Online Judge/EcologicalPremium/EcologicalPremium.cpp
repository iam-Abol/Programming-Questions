#include <iostream>
#include <vector>
int main()
{
	int t;
	std::cin>>t;

	int n;
		for (int i = 0; i < t; i++)
		{
			std::cin >> n;
			int sum=0;
			float f1, f2, f3;
			for (int i = 0; i < n; i++)
			{
				std::cin >> f1 >> f2 >> f3;
				sum += f1*f3;
			}
			std::cout<<sum<<std::endl;
		
		}
	
		
		

	return 0;
}

