#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10,mod=1e9+7;
int n;
void solve() {
	cin>>n;
	set <pair<int,int> > s;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		s.insert({x,y});
	}
	int ans=0;
	for(auto p:s){
		if(s.find({p.first,!p.second})!=s.end()) ans+=n-2;
	
	}
	ans/=2;
	for(auto p:s)
		if(s.find({p.first-1,!p.second})!=s.end() && s.find({p.first+1,!p.second})!=s.end()) ans++;
	cout<<ans<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {

		solve();

		//////////////////////
	}
}