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
// N<=1e2
ll dp[150][100005],a[lim],s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n>>s;
    for (int i=1;i<=n;i++) cin>>a[i];

    dp[1][a[1]]=1;
    dp[1][0]=1;
    for (int i=2;i<=n;i++)
        for (int j=0;j<=s;j++) {
            dp[i][j]=dp[i-1][j];
            if (j>=a[i])
            dp[i][j]=(dp[i][j]+dp[i-1][j-a[i]])%MOD;
        }
    cout<<dp[n][s];


    return 0;
}
// N<=1e3
ll dp[2][100005],a[lim],s;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n>>s;
    for (int i=1;i<=n;i++) cin>>a[i];

    dp[1][a[1]]=1;
    dp[1][0]=1;
    for (int i=2;i<=n;i++)
        for (int j=0;j<=s;j++) {
            dp[i%2][j]=dp[(i-1)%2][j];
            if (j>=a[i])
            dp[i%2][j]=(dp[i%2][j]+dp[(i-1)%2][j-a[i]])%MOD;
        }
    cout<<dp[n%2][s];


    return 0;
}

