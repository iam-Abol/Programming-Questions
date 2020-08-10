

#include <iostream>
#include <string>

int CountUniqueCharacters(std::string str){
    int count = 0;

    for (int i = 0; i < str.size(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}
int main()
{
	int n;
	std::cin>>n;
	std::string strs[n];
	int counts[n];
	for(int i=0;i<n;i++){
		std::cin>>strs[i];
	}
	for(int i=0;i<n;i++){
		counts[i]=CountUniqueCharacters(strs[i]);
	}
	int max=0;
	for(int i=0;i<n;i++){
		if(counts[i]>max){
				max=counts[i];
		}
	
	}
std::cout<<max;
	
	return 0;
}
