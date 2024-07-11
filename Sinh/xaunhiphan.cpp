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

int x[100],n;
void xuat(){
    for (int i=1;i<=n;i++)
    cout<<x[i];
    cout<<'\n';
}

void Try(int i){
    for (int j=0;j<=1;j++) {
        x[i]=j;
        if (i==n) xuat(); else Try(i+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif

    cin>>n;
    Try(1);

    return 0;
}
