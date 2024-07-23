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

void euclid(ll a,ll b,ll &x,ll &y){
    if (b==0) {
        x=1;
        y=0;
        return ;
    }
    ll x1,y1;
    euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    ll a,b,x,y,n; cin>>n>>a>>b;
    ll g=__gcd(a,b);

    if (n%g!=0) return cout<<0,0;

    a/=g;
    b/=g;
    n/=g;

    euclid(a,b,x,y);
    if (x>=0 && y<=0) {
        swap(x,y);
        swap(a,b);
    }
    x*=n;
    y*=n;

    // lag
    ll k1 =(x>=0) ? 0     : (-(x/b));
    ll k2 =(y>=0) ? (y/a) : -1;

    if (x<0 && x%b!= 0) k1++;
    if (y<0 && y%a!= 0) k2++;

    cout << max(0*1ll, k2 - k1 + 1) << endl;
    //
  
    return 0;
}
