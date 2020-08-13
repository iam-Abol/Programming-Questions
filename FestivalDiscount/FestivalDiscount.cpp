
#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
	int size;
	std::cin >> size;
	int x;
	std::cin >> x;
	std::vector<int> myVec;

	for (int i = 0; i < size; i++){
		int n;
		std::cin >> n;
		myVec.push_back(n);
	}
	std::sort(myVec.begin(), myVec.end());
	
	
	if (size == 1){
		std::cout << 1;
	}
	else{
		int t = 0;
		
		for (int i = 0; i < size-1; i++){
			if (myVec[i] + myVec[i + 1] <= x){
				t++;
			}

		}
		std::cout << t+1 ;
	}
	
	return 0;
}

