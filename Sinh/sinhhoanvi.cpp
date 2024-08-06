#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

int x[20],n;
bool danhdau[20];

void print(){
	for (int i=1;i<=n;i++) cout<<x[i];
	cout<<'\n';
}

void Try(int i){
	for (int j=1;j<=n;j++)
	if (!danhdau[j]) {
		x[i]=j;
		danhdau[j]=true;
		if (i==n) print(); else Try(i+1);
		danhdau[j]=false;
	}
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   	
   	cin>>n;
	Try(1);
   	
	return 0;
}
