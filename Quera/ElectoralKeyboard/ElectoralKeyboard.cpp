#include <iostream>
void uppercase(char &c)
{
	c -= 32;
}
int main()
{
	int size;
	std::cin >> size;

	std::string name = "";
	bool flag = false;
	std::string c;
	for (int i = 0; i < size; i++){
		std::cin >> c;
		if (c != "CAPS"){

			if (flag == false){
				name += c;
			}
			else{
				uppercase(c[0]);
				name += c;
			}

		}
		else{
			if (flag == false)
				flag = true;
			else
				flag = false;
		}
	}
	std::cout << name;

	
	return 0;
}

