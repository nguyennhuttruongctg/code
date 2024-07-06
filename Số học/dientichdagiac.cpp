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

ll a[lim],b[lim];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n; cin>>n;
    for (int i=0;i<n;i++) cin>>a[i]>>b[i];

    a[n]=a[0];
    b[n]=b[0];
    ll x=0,y=0;
    for (int i=0;i<n;i++) {
        x+=a[i]*b[i+1];
        y+=b[i]*a[i+1];
    }
    ld s=abs((x-y)/2.0);
    cout<<fixed<<setprecision(3)<<s;

    return 0;
}
