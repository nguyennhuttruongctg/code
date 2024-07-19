#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

int dp[lim],a[lim];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];

    dp[1]=0;
    for (int i=2;i<=n;i++) {
        dp[i]=INT_MAX-1;
        if (a[i]==0)
        dp[i]=min(dp[i-1]+1,dp[i-2]+1);
    }
    cout<<dp[n];

    return 0;
}
