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

int dp[lim],a[lim],s,k=1e8;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n>>s;
    for (int i=1;i<=n;i++) cin>>a[i];

    dp[0]=0;
    fill(&dp[1],&dp[s+1],k);

    for (int i=1;i<=n;i++)
    for (int j=a[i];j<=s;j++)
    if (dp[j-a[i]]!=k) dp[j]=min(dp[j],dp[j-a[i]]+1);

    if (dp[s]==k) cout<<-1; else cout<<dp[s];

    return 0;
}
