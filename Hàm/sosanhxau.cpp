bool sosanh(string a,string b){
    a.insert(0,max(0,len(b)-len(a)),'0');
    b.insert(0,max(0,len(a)-len(b)),'0');

    if (a>b) return 1;
    if (a==b) return 2;
    return 3;
}
