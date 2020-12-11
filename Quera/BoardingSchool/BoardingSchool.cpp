
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	int size;
	std::cin >> size;

	std::vector <int> numbers;
	for (int i = 0; i < size; i++){
		int number;
		std::cin >> number;
		numbers.push_back(number);
	}
	bool flag = true;
	std::sort(numbers.begin(), numbers.end());
	
	int answer = numbers[size-1];
	
	while (true){
		for (int i = 0; i < size - 1; i++){
			if (answer%numbers[i] != 0){
				flag = false;
			}
		}
		if (flag == true)
			break;
		else{
			flag = true;
			answer += numbers[size-1];
		}
	}
	answer++;
	answer -= (answer / 30) * 30;
	std::cout << answer ;

	return 0;
}
