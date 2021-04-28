#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int stoi(string s){
	int result=0;
	for(int i=0;i<s.size();i++){
		int d=s[i]-48;
		result*=10;
		result+=d;
	}
	return result;
}
int min(int a,int b){
	return a<b?a:b;
}
int main(int argc, char** argv) {
	ifstream fin("matrix.txt");
	vector<vector<int> > matrix;
	for(int i=0;i<80;i++){
		string line;
		fin>>line;
		string number="";
		vector<int> lv;
		for(int j=0;j<line.size();j++){
			if(line[j]==','){
				int n=stoi(number);
				lv.push_back(n);
				number="";
			}
			else{
				number+=line[j];
			}
		}
		lv.push_back(stoi(number));
		matrix.push_back(lv);
	}
	long long int result[80][80];
	result[0][0]=matrix[0][0];
	for(int i=1;i<80;i++){
		result[0][i]=matrix[0][i]+result[0][i-1];
	}
	for(int i=1;i<80;i++){
		result[i][0]=matrix[i][0]+result[i-1][0];
	}
	for(int i=1;i<80;i++){
		for(int j=1;j<80;j++){
			result[i][j]=min(result[i-1][j],result[i][j-1])+matrix[i][j];
		}
	}
	cout<<result[79][79]<<endl;
	return 0;
}
