
#include <iostream>

int countNumberOfRepeat(std::string main, std::string sample, int size){
	int n = size - sample.size();
	int numberOfRepeat = 0;
	for (int i = 0; i <= n; i++){
		std::string substr = main.substr(i, sample.size());
		if ( substr== sample)
			numberOfRepeat++;
	}
	return numberOfRepeat;
}
int main()
{
	int n, m;
	std::cin >> n >> m;
	std::string *str = new std::string[n];
	std::string sample;

	int numberOfRepeat = 0;
	for (int i = 0; i < n; i++)
		std::cin >> str[i];
	std::cin >> sample;
	for (int i = 0; i < n; i++){
		numberOfRepeat += countNumberOfRepeat(str[i], sample, m);
	}
	for (int i = 0; i < m; i++){
		std::string sum = "";
		for (int j = 0; j < n; j++){
			sum += str[j][i];
		}
		numberOfRepeat += countNumberOfRepeat(sum, sample, n);

	}
	std::cout << numberOfRepeat ;


	return 0;
}

