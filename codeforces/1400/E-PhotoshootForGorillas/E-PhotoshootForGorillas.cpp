#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,w,k;

void solve() {
	vector<int> v1,v2;
      cin>>n>>m>>k>>w;
      for(int i=1;i<=w;i++){
      	int x;
      	cin>>x;
      	v1.push_back(x);
	  }
	  for(int i=0;i<n;i++){
	  	for(int j=0;j<m;j++){
	  		const int p=-1;
	  		int total=(min(i,n-k)-max(p,i-k))*(min(j,m-k)-max(p,j-k));
	  		v2.push_back(total);
	 
		  }
	  }
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int ans=0;
	for(int i=w-1,j=n*m-1;i>=0;j--,i--) ans+=v1[i]*v2[j];
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