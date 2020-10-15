
#include <iostream>
#include <vector>
void find(std::vector <int> &vec, int number){
	for (int i = 1; i <= number; i++){
		if (number%i == 0)
			vec.push_back(i);
	}
}
int main()
{
	int a, b, max;
	std::cin >> a >> b >> max;
	std::vector<int> vec1, vec2;
	find(vec1, a);
	find(vec2, b);
	int result = 0;
	for (int i = 0; i < vec1.size(); i++){
		for (int j = 0; j < vec2.size(); j++){
			if (vec1[i] + vec2[j] <= max)
				result++;
		}
	}
	std::cout << result;

	return 0;
}

