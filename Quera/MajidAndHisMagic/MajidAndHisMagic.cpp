

#include <iostream>
struct  numbers
{
	int number;
	int repeat;
};
int main()
{
	int n;
	std::cin >> n;
	numbers *array=new numbers[n];
	for (int i = 0; i < n; i++){
		std::cin >> array[i].number;
	}
	int t = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (array[i].number == array[j].number)
				t++;
		}
		array[i].repeat = t;
		t = 0;
	}
	numbers minimum = array[0];
	for (int i = 0; i < n; i++){
		if (array[i].repeat < minimum.repeat)
			minimum = array[i];
	}
	for (int i = 0; i < n; i++){
		if (array[i].repeat == minimum.repeat){
			if (array[i].number < minimum.number){
				minimum = array[i];
			}
		}
	}
	
	std::cout <<minimum.number;

	
	return 0;
}

