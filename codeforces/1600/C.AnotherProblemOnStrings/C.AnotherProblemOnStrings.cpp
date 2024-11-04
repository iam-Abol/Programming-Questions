#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10,mod=1e9+7;
int n,q,arr[N],k;
int a[N],b[N];
//pair<int,int> p[N];
string s;
int ans;
vector<int> seg[N];
vector<int> v;
//bool mark[i][j];
//int dp[N][5];

void solve() {
	cin>>n>>s;
	v.push_back(-1);
	if(n==0){
		int cnt=0;
		s=" "+s+" ";
		for(int i=1;i<s.size();i++){
			if(s[i]=='0') cnt++;
			else{
				ans+=(cnt+1)*cnt/2;
				cnt=0;
			}
//			cout<<i<<" "<<cnt<<" "<<ans<<endl;
		}
			
		cout<<ans<<endl;
		
		return;
	}
	for(int i=0;i<s.size();i++) if(s[i]=='1') v.push_back(i);
	if(v.size()<n){
		cout<<0<<endl;
		return;
	}
		v.push_back(s.size());
//		for(auto x:v) cout<<x<<" ";
//		cout<<"---------------------------"<<endl;
	for(int i=n;i<v.size()-1;i++){
		int first=i-n+1,last=i;
//		cout<<first<<" "<<last<<endl;
		int a,b;
		a=b=0;
		 a+=v[first]-v[first-1];
		 b+=v[last+1]-v[last];
		
		ans+=a*b;
	}
	cout<<ans<<endl;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
//	cin>>t;
	while(t--) {

		solve();

		//////////////////////
	}


}