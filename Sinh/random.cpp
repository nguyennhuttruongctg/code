#include <bits/stdc++.h>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    srand(time(NULL));
    ll a,b; cin>>a>>b;
    for (int i=1;i<=10;i++)
    cout<<sinh(a,b)<<'\n';


    return 0;
}
