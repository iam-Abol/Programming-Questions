
#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int number[6];
	for (int i = 0; i < 6; i++)
		std::cin >> number[i];
	int min = number[0], max;
	max = 0;
	for (int i = 0; i < 6; i++){
		if (number[i]>max)
			max = number[i];
	}
	for (int i = 0; i < 6; i++){
		if (number[i] < min)
			min = number[i];
	}
	int t = 0;
	int numberOfRepeat[3] = { 0, 0, 0 };
	
	for (int i = min; i < max; i++){
		if (i >= number[0] && i < number[1]){
			t++;
		}
		if (i >= number[2] && i < number[3]){
			t++;
		}
		if (i >= number[4] && i < number[5]){
			t++;
		}
		

		if (t == 1){
			numberOfRepeat[0]++;
		}
		else if (t==2)
		{
			numberOfRepeat[1]++;
		}
		else if (t==3){
			numberOfRepeat[2]++;
		}
		

		t = 0;
	}
	numberOfRepeat[0] = numberOfRepeat[0] * 1 * a;
	numberOfRepeat[1] = numberOfRepeat[1] * 2 * b;
	numberOfRepeat[2] = numberOfRepeat[2] * 3 * c;
	int sum = 0;
	for (int i = 0; i < 3; i++){
		sum += numberOfRepeat[i];
	}
	std::cout << sum ;
	
	return 0;
}

