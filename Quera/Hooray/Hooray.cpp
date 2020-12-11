
#include <iostream>
#include <vector>

int main()
{
	std::vector <std::string> days;
	std::string day;
	int n;
	for (int i = 0; i < 3; i++){
		std::cin >> n;
		for (int j = 0; j < n; j++){
			std::cin >> day;
			days.push_back(day);
		}
	}
	int numberOfDay = 0;

	for (int i = 0; i < days.size(); i++){
		bool flag = true;
		for (int j = 0; j<i; j++){
			if (days[j] == days[i]){
				flag = false;
			}
		}
		if (flag == true){
			numberOfDay++;
		}
		
	}
	std::cout << 7-numberOfDay ;

	return 0;
}

