#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+5,M2C=1e3;

ll powMOD(ll a,ll n,ll MOD){
    ll res=1;
    if (n==0) return 1;
    if (a==0) return 0;
    while (n>0) {
        if (n&1) res=(res*a)%MOD; // n%2!=0; ( n le)
        n>>=1; // n=n/2;
        a=(a*a)%MOD;
    }
    return res%MOD;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    ll a,n,mod; cin>>a>>n;
    mod=1e9+7;
    cout<<powMOD(a,n,mod);

    return 0;
}
