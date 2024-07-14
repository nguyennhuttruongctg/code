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

int a[lim],l[lim];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    int n,res=0; cin>>n;
    for (int i=1;i<=n;i++) cin>>a[i];

    /// n<=5000

    for (int i=1;i<=n;i++) {
        l[i]=1;
        for (int j=1;j<i;j++)
        if (a[i]>a[j] && l[j]+1>l[i]) l[i]=l[j]+1;
        res=max(res,l[i]);
    }
    cout<<res;

    /// n<=30000

    for (int i=1;i<=n;i++) {
        int j=lower_bound(l+1,l+res+1,a[i])-l;
        l[j]=a[i];
        res=max(res,j);
    }
    cout<<res;

    return 0;
}
