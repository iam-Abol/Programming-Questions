#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;
vector<int> factors(int n){
	vector<pair<int,int> > result;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			bool f=false;
			for(int j=0;j<result.size();j++){
				if(result[j].first==i){
					result[j].second++;
					f=true;
				}
			}
			if(f==false)
				result.push_back({i,1});
			
			n/=i;
			i=1;
		}
	}
	vector<int> r;
	for(int i=0;i<result.size();i++){
		r.push_back(pow(result[i].first,result[i].second));
	}
	return r;
}
void add(set<int> &f,vector<int> s){
	for(int i=0;i<s.size();i++){
		f.insert(s[i]);
	}
}
bool f(int n){
	if(factors(n).size()!=4)
		return false;
	vector<int> s1=factors(n);
	vector<int> s2=factors(n+1);
	vector<int> s3=factors(n+2);
	vector<int> s4=factors(n+3);
	if(s2.size()==4&&s3.size()==4&&s4.size()==4){
		set<int> result;
		add(result,s1);
		add(result,s2);
		add(result,s3);

		add(result,s4);
		if(result.size()==16)
		{
			return true;
			
		}
		return false;
	}
	return false;

}
int main(int argc, char** argv) {
	vector<pair<int,vector<int> > > numbersAndFactors;
	for(int i=1;;i++){
		if(f(i)){
			cout<<i<<endl;
			break;
		}
	}
	

	
	return 0;
}
//	for(int i=0;i<numbersAndFactors.size()-3;i++){
//	
//		if(	numbersAndFactors[i+3].first-numbersAndFactors[i+2].first==1&&numbersAndFactors[i+2].first-numbersAndFactors[i+1].first==1&&numbersAndFactors[i+1].first-numbersAndFactors[i].first==1)
//		{
//		
//			set<int> s;
//			f(s,numbersAndFactors[i].second);
//			
//			f(s,numbersAndFactors[i+1].second);
//			
//			f(s,numbersAndFactors[i+2].second);
//			
//			f(s,numbersAndFactors[i+3].second);
//			if(s.size()==16)
//			{
//				cout<<numbersAndFactors[i].first<<endl;
//				break;
//			}
//			
//		}
//	}
