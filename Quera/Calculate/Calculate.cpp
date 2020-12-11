


#include <iostream>
class Calculate{
	int players[4][3];
	int maxs[4];
	
public:
	Calculate(){
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				std::cin >> players[i][j];
			}
		}
	}
	void max(){
		int m = 0;
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				if (players[i][j]>m){
					m = players[i][j];
				}
			}
			maxs[i] = m;
			m = 0;
		}
	}
	void search(){
		int m = 0;

		for (int i = 0; i < 4; i++){
			if (maxs[i]>m){
				m = maxs[i];
			}
		}
		for (int i = 0; i < 4; i++){
			if (maxs[i] == m){
				std::cout << i + 1 ;
				break;
			}
		}
	}
};
int main()
{
	Calculate obj;
	obj.max();
	obj.search();
	
	return 0;
}

