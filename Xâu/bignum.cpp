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

string chuyen(int n){
    stringstream ss;
    ss<<n;
    return ss.str();
}

int sosanh(string a,string b){
    a.insert(0,max(0,len(b)-len(a)),'0');
    b.insert(0,max(0,len(a)-len(b)),'0');

    if (a>b) return 1;
    if (a==b) return 2;
    return 3;
}
// cong

string cong(string a,string b){
    string c;
    int tam=0,du=0;
    
    a.insert(0,max(0,len(b)-len(a)),'0');
    b.insert(0,max(0,len(a)-len(b)),'0');

    for (int i=len(a)-1;i>-1;i--) {
        tam=int(a[i]-'0')+int(b[i]-'0')+du;
        du=tam/10;
        c=char(tam%10+48)+c;
    }

    if (du!=0) c="1"+c;
    return c;
}

// tru

string tru(string a,string b) {
    string c;
    int tam=0,du=0;

    a.insert(0,max(0,len(b)-len(a)),'0');
    b.insert(0,max(0,len(a)-len(b)),'0');

    for (int i=len(a)-1;i>-1;i--) {
        tam=int(a[i]-38)-int(b[i]-48)-du;
        du=(tam<10) ? 1:0;
        c=char(tam%10+48)+c;
    }
    while (c[0]=='0' && len(c)>1) c.erase(0,1);
    return c;
}

// nhan

string nhanBe(string a,char f){
    string c;
    int tam=0,du=0,b=f-'0';

    for (int i=len(a)-1;i>-1;i--) {
        tam=int(a[i]-'0')*b+du;
        du=tam/10;
        c=char(tam%10+48)+c;
    }

    return c=(du!=0) ? chuyen(du)+c:c;
}

string nhan(string a,string b){
    string c="0",tam;
    int d=0;

    for (int i=len(b)-1;i>-1;i--) {
        tam=nhanBe(a,b[i]);
        //tam.insert(len(tam)-1,d,'0');
        for (int j=0;j<d;j++) tam+="0";
        d++;
        c=cong(c,tam);
    }
    return c;
}

// chia

string chia(string a,string b){
    string pre[11],thuong="";
    pre[0]="0";
    for (int i=1;i<=10;i++) pre[i]=cong(pre[i-1],b);

    string du=a.substr(0,len(b)-1);
    for (int i=len(b)-1;i<len(a);i++) {
        du+=a[i];
        int k=1;
        while (sosanh(du,pre[k])!=3) k++;

        k--;
        thuong+=char(k+48);
        du=tru(du,pre[k]);
    }
    while (len(thuong)>1 && thuong[0]=='0') thuong.erase(0,1);

    // phan Du return du
    return thuong;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        OpenFile("task");
    #endif
	

    return 0;
}
