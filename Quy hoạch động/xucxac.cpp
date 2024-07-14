#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+5,M2C=1e3,MOD=1e9+7;

ll dp[lim];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    ll n; cin>>n;
    dp[0]=1;
    for (int s=1;s<=n;s++) {
        for (int i=1;i<=6;i++)
        if (i<=s)
        dp[s]=(dp[s]%MOD+dp[s-i]%MOD)%MOD;
    }
    cout<<dp[n];

    return 0;
}
