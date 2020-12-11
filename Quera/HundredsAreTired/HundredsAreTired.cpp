


#include <iostream>
#include <string>
void reverse(std::string &str){
	std::string reverseStr="";
	for (int i = str.size() - 1; i >= 0; i--){
		reverseStr += str[i];
	}
	str = reverseStr;

}
int main()
{
	std::string a, b, ar, br;
	std::cin >> a >> b;
	ar = a;
	br = b;
	reverse(ar);
	reverse(br);
	
	if (ar > br){
		std::cout << b << " < " << a;
	}
	else if(br>ar){
		std::cout << a << " < " << b;
	}
	else if (ar == br){
		std::cout << a << " = " << b;
	}

	return 0;
}

