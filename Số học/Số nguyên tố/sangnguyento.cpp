#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

unsigned long long n;
int k;
const int N7=1e7;

// sàng số lớn

void sang1(){
	check[0]=check[1]=false;
	for (int i=2;i*i<=N7;i++)
	if (check[i]) {
		a.pb(i);
		for (int j=i*i;j<=N7;j+=i) check[j]=false;
	}
	for (int i=2;i<=N7;i++)
	if (check[i]) a.pb(i);
}

// sàng số bé

vector<bool> check(N7,true);
vector<ll> a;

void sang2(){
	check[0]=check[1]=false;
	for (int i=2;i<=N7;i++)
	if (!check[i]) {
		a.pb(i);
		for (int j=i*2;j<=N7;j+=i) check[j]=true;	
	}
}

//

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   	
   	/*
   	int t; cin>>t;
   	while (t--) {
   		cin>>n>>k;		
	  }
	  */
    sang1();
	  for (int i=0;i<len(a);i++) cout<<a[i]<<'\n';
   	
	return 0;
}
