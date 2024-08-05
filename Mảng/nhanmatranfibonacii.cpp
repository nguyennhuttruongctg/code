#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

struct matran{
	ll f[2][2];
	matran() {
		memset(f,0,sizeof f);
	}
};

matran operator * (matran a,matran b){
	matran c;
	for (int i=0;i<2;i++)
	for (int j=0;j<2;j++) {
		for (int k=0;k<2;k++) c.f[i][j]+=a.f[i][k]*b.f[k][j]%MOD;
		c.f[i][j]%=MOD;
	}	
	return c;
}

matran powMOD(matran a,ll n){
	matran res;
	res.f[0][0]=1; res.f[0][1]=1;
	res.f[1][0]=1;
	
	while (n){
		if (n&1) res=res*a;
		n>>=1;
		a=a*a;
	}	
	return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   
	ll n; cin>>n;
	if (n<2) return cout<<(n==1) ? 0:1,0;
	
	matran a;
	a.f[0][0]=1; a.f[0][1]=1;
	a.f[1][0]=1; a.f[1][1]=0;
	
	a=powMOD(a,n-2);
	cout<<a.f[0][0];	
	
	return 0;
}
