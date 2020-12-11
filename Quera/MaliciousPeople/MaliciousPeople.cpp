
#include <iostream>

int main()
{
	int black, white;
	std::cin >> black >> white;
	while (black + white > 1){
		if (black % 2 == 0){
			white += black / 2;
			black = 0;
		
		}
		else{
			white += black / 2;
			black = 1;
			
		}
		if (white % 2 == 0){
			int t = white / 2;
			white = t;
		}
		else{
			int t = white / 2;
			white = t + 1;
		}
		if (black == 1 && white == 1){
			black -= 1;
			white -= 1;
			black++;
		}
	}
	if (white == 1)
		std::cout << "white";
	else if (black == 1)
		std::cout << "black";
	else
		std::cout << "noprediction";
	return 0;
}

