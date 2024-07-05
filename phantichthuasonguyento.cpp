#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool snt(ll n){
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2==0 || n%3==0) return false;
    ll k=sqrt(n);
    for (int i=5;i<=k;i+=6)
    if (n%i==0 || n%(i+2)==0) return false;
    return true;
}
ll a[1000],b[1000],l=0;

int main(){

    ll n,dem=0; cin>>n;
    if (snt(n)) {
        cout<<1<<'\n';
        cout<<n<<" "<<1;
        return 0;
    }

    for (ll i=2;i*i<=n;i++) {
        dem=0;
        while (n%i==0) {
            dem++;
            n/=i;
        }
        if (dem>0) {
            a[l]=i;
            b[l]=dem;
            l++;
        }
    }
    if (n>1) {
        a[l]=n;
        b[l]=1;
        l++;
    }
    
    cout<<l<<'\n';
    for (int i=0;i<l;i++)
    cout<<a[i]<<" "<<b[i]<<'\n';

    return 0;
}
