
#include <iostream>
struct Location
{
	int x, y;
};
int main()
{
int size;
	std::cin >> size;
	Location *location = new Location[size];
	for (int i = 0; i < size; i++)
		std::cin >> location[i].x >> location[i].y;
	for (int i = 0; i < size; i++){
		if ((location[i].x + location[i].y) % 2 == 1)
			std::cout << -1;
		else if (location[i].x - location[i].y != 2 && location[i].x - location[i].y != 0){
			std::cout << -1;
		}
		else if ((location[i].x + location[i].y) % 2 == 0){
			if (location[i].x % 2 == 0&&location[i].y%2==0){
				std::cout << location[i].x + location[i].y ;
			}
			else if (location[i].x % 2 == 1 && location[i].y % 2 == 1){
				std::cout << location[i].x + location[i].y - 1;
			}
		}
		std::cout << std::endl;

	}
	delete[] location;
	
	return 0;
}

