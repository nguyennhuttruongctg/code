#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define len(s) (int)s.size()
#define OpenFile(Name) freopen(Name".inp","r",stdin); //freopen(Name".out","w",stdout);
using namespace std;
const int lim=1e6+4,M2C=1e3,MOD=1e9+7;

string chuyen(int n){
	stringstream ss;
	ss<<n;
	return ss.str();
}

void canbang(string &a,string &b){
	a.insert(0,max(0,len(b)-len(a)),'0');
	b.insert(0,max(0,len(a)-len(b)),'0');	
}

int sosanh(string a,string b){
	canbang(a,b);
	
	if (a>b) return 1; else
	if (a==b) return 2;
	return 3;
}

string cong(string a,string b){
	string c;
	int du=0,tam=0;
	canbang(a,b);
	
	for (int i=len(a)-1;i>-1;i--) {
		tam=(a[i]-'0')+(b[i]-'0')+du;
		du=tam/10;
		c=char(tam%10+48)+c;
	}
	if (du!=0) c="1"+c;
	return c;
}

string tru(string a,string b){
	string c;
	int tam=0,du=0;
	canbang(a,b);
	
	for (int i=len(a)-1;i>-1;i--) {
		tam=(a[i]-38)-(b[i]-48)-du;
		du=(tam<10) ? 1:0;
		c=char(tam%10+48)+c;
	}
	while (len(c)>1 && c[0]=='0') c.erase(0,1);
	return c;
}

string nhanBe(string a,char f){
	int b=f-'0',du=0,tam=0;
	string c;
	
	for (int i=len(a)-1;i>-1;i--) {
		tam=(a[i]-'0')*b+du;
		du=tam/10;
		c=char(tam%10+48)+c;
	}
	if (du!=0) c=chuyen(du)+c;
	return c;
}

string nhan(string a,string b){
	string c="0",t;
	int d=0;
	
	for (int i=len(b)-1;i>-1;i--) {
		t=nhanBe(a,b[i]);
		for (int j=0;j<d;j++) t+='0';
		d++;
		c=cong(c,t);
	}
	return c;
}

string chia(string a,string b,string phep) {
	string d[11],du=a.substr(0,len(b)-1),thuong;
	
	d[0]="0";
	for (int i=1;i<=10;i++) d[i]=cong(d[i-1],b);
	
	for (int i=len(b)-1;i<len(a);i++) {
		du+=a[i];
		int k=1;
		while (sosanh(du,d[k])!=3) k++;
		k--;
		thuong+=char(k+48);
		du=tru(du,d[k]);
	}	
	if (phep=="mod") return du;
	while (len(thuong)>1 && thuong[0]=='0') thuong.erase(0,1);
	return thuong;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
   	
	string n; cin>>n;
	// n(3n+2n^2+1)
	
	string a=nhan(n,cong(n,"1"));
	a=chia(a,"2","div");
	
	string b=nhan(tru(n,"1"),n);
	b=nhan(b,cong(n,"1"));
	
	b=chia(b,"3","div");
	
	string res=cong(a,b);
	res=chia(res,"1000000007","mod");
	cout<<res;

  // a=((n+1)*n)/2   
  // b=((n-1)*n*(n+1))/3
  // res=a+b
	
	return 0;
}
