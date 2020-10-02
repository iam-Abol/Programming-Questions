#include <iostream>
struct Phone
{
	int price;
	int quality;
};
int main()
{
	int n;
	std::cin >> n;
	Phone *phone = new Phone[n];
	for (int i = 0; i < n; i++){
		std::cin >> phone[i].price >> phone[i].quality;

	}
	int result = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i != j){
				if (phone[i].price >= phone[j].price&&phone[i].quality <= phone[j].quality){
					result++;
					break;
				}
			}
		}
	}
	std::cout << n - result ;
	delete[] phone;
	system("pause");
	return 0;
}

