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

int dp[lim],w,v,m;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n>>m;
    for (int i=0;i<n;i++) {
        cin>>w>>v;
        for (int j=m;j>w-1;j--)
        dp[j]=max(dp[j],dp[j-w]+v);
    }
    cout<<dp[m];


    return 0;
}
