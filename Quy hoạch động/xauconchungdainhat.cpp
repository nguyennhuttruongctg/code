#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+5,M2C=5*1e3,MOD=1e9+7;

int dp[M2C][M2C];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    string a,b,res; cin>>a>>b;
    int n=len(a),m=len(b);

    a="0"+a;
    b="0"+b;

    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    if (a[i]==b[j])
        dp[i][j]=dp[i-1][j-1]+1;
    else
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

    // lay do dai
    cout<<dp[n][m]<<'\n';

    // lay sau
    int x=n,y=m;
    while (x>0 && y>0) {
        if (a[x]==b[y]) {
            res=a[x]+res;
            x--;
            y--;
        } else
        if (dp[x-1][y]>dp[x][y-1])
        x--; else y--;
    }
    cout<<res;

    return 0;
}
