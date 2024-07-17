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

ll mulMOD(ll a,ll b,ll c){
    ll res=0;
    while (b>0) {
        if (b&1) res=(res+a)%c;
        b>>=1;
        a=(a*2)%c;
    }
    return res%c;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    ll a,b,c; cin>>a>>b>>c;
    // (a*b)%c
    cout<<mulMOD(a,b,c);

    return 0;
}
