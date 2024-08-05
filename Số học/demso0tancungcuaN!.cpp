#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   
	ll n,res=0,i=5; cin>>n;
	
	while (i<=n) {
		res+=n/i;
		i*=5;
	}
	cout<<res;
	
	return 0;
}
