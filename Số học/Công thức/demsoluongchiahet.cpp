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

ll left(ll l, ll k){
    if (l%k==0) return l;
    return l/k*k+k;
}

ll right(ll r,ll k){
    return r/k*k;
}

ll get(ll l, ll r, ll k){
    return (right(r,k)-left(l,k))/k+1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

   cout<<get(3,22,2);

    return 0;
}
