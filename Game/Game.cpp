

#include <iostream>
class Game{
	int n;
	int *numbers;
	int *newNumbers;
public:
	Game(int n){
		this->n = n;
		numbers = new int[this->n];
		for (int i = 0; i < this->n; i++){
			std::cin >> numbers[i];
		}
	}
	void sort(){
		int k;
		for (int i = 1; i < n; i++){
			for (int j = i; j>0; j--){
				if (numbers[j] < numbers[j - 1]){
					k = numbers[j - 1];
					numbers[j - 1] = numbers[j];
					numbers[j] = k;
				}
			}
		}
	
	}
	void newSort(){
		newNumbers = new int[n];
		for (int i = 0, j = n - 1; i < n && j > 0; i += 2, j--){
			newNumbers[i] = numbers[j];
		}
		for (int i = 1, j = 0; i < n&&j < n; i += 2,j++){
			newNumbers[i] = numbers[j];
		}
		for (int i = 0; i < n; i++){
			std::cout << newNumbers[i] << " ";
		}
		
	}
	

};
int main()
{
	int n;
	std::cin>>n;
	Game obj(n);
	obj.sort();
	obj.newSort();
	
	return 0;
}

