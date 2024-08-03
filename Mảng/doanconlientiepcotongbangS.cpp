#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

ll t[lim],x,s,res=0;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   
    int n; cin>>n;
    for (int i=1;i<=n;i++) {
    	cin>>x;
    	t[i]=t[i-1]+x;
	}
	cin>>s;
	
	for (int r=1;r<=n;r++)
	if (t[r]>=s) {
		int k=upper_bound(t,t+1+n,t[r]-s)-t-1;
		if (t[r]-t[k]==s) res=max(res,(r-k)*1LL);
    		// >= bỏ if ra
	}
	cout<<res;
	
	return 0;
}
