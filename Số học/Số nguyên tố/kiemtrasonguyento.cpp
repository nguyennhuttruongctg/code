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

ll sinh(ll l, ll r){
    return l+rand()%(r-l+1);
}

ll mul(ll a, ll n,ll mod){
    ll res=0;
    while (n) {
        if (n&1) res=(res+a)%mod;
        n>>=1;
        a=(a+a)%mod;
    }
    return res%mod;
}

ll powMOD(ll a, ll n,ll mod){
    ll res=1;
    while (n) {
        if (n&1) res=mul(res,a,mod);
        n>>=1;
        a=mul(a,a,mod);
    }
    return res%mod;
}

bool songuyento(ll n){
    for (ll i=1;i<=100;i++) {
        ll x=sinh(2,n-1);
        if (powMOD(x,n-1,n)!=1) return false;
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    srand(time(NULL));
    ll x;
    while (cin>>x)
    cout<<songuyento(x)<<'\n';

    return 0;
}
