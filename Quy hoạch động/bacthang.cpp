#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

ll a[lim],f[lim];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   	
	ll n,k,m=14062008,x; cin>>n>>k;
	
	for (int i=1;i<=k;i++) cin>>x,a[x]=1;
	
	f[1]=1;
	for (int i=2;i<=n;i++)
	if (a[i]==0) f[i]=(f[i-1]+f[i-2])%m;
	
	cout<<f[n];
	
	return 0;
}
