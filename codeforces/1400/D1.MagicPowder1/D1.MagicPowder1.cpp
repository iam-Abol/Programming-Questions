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
//bool mark[i][j];
//int dp[N][5];

bool isOk(int x){
	int magic=0;
	for(int i=1;i<=n;i++)
		if(a[i]*x > b[i]) magic+=a[i]*x-b[i];
	return magic<=k;
}

void solve() {
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) cin>>b[i];
	int l=0,r=1e9;
	while(r-l>1) {
		int mid=(l+r)/2;
		if(isOk(mid)) l=mid;
		else r=mid;
	}
	cout<<l<<endl;
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