#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10,mod=1e9+7;
int n,arr[N];
int pow(int a,int b){
	if(b==0) return 1;
	int half=pow(a,b/2);
	if(b%2) return ((half*half)%mod * a )%mod;
	else return (half*half)%mod; 
}
void solve() {
	cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
	int ans=0,sum=0;
	for(int i=1;i<=n;i++) sum+=arr[i];
	sum%=mod;
	for(int i=1;i<=n;i++){
			sum-=arr[i];
		if(sum<0) sum+=mod;
		ans+=(arr[i]%mod)*(sum%mod) ;
		ans%=mod;
	}	

	cout<<(ans*pow((n*(n-1)/2)%mod,mod-2))%mod<<endl;

}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {

		solve();

		//////////////////////
	}
}