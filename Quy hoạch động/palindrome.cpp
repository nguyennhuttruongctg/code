#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+5,M2C=5*1e3+1,MOD=1e9+7;

bool f[M2C][M2C];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    string s; cin>>s;

    s="a"+s;
    int n=len(s),t,l,r;
    for (int i=1;i<=n;i++) f[i][i]=1;

    for (int k=2;k<=n;k++) {
        for (int i=1;i<=n-k+1;i++) {
            int j=i+k-1;
            if (s[i]==s[j] && k==2) f[i][j]=1; else
            f[i][j]=(f[i+1][j-1] && s[i]==s[j]);
        }
    }

    // test doi xung
    cin>>t;
    for (int i=1;i<=t;i++) {
        cin>>l>>r;
        if (r-l<2 && s[l]==s[r]) cout<<"YES\n"; else
        if (f[l+1][r-1] && s[l]==s[r])
        cout<<"YES\n"; else cout<<"NO\n";
    }

    return 0;
}
