#include<iostream>

using namespace std;

int main(){
    char c;
    int ax=1;

    while(scanf("%c",&c)!=EOF){
        if(c=='"'){
            if(ax) std::cout<<"``";
            else std::cout<<"''";
            
            ax=(!ax);
        }else std::cout<<c;
    }

    return 0;
}
