#include<bits/stdc++.h>
using namespace std;

bool exist(vector<int>& v,int q){
    int k=0;
    for(int b=v.size()/2;b>=1;b/=2){
        while(k+b<v.size() && v[k+b]<=q)k+=b;
    }
    return v[k]==q ? true:false;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<int> v(n,0);
    for(int i=0;i<n;++i)cin>>v[i];
    for(int i=0;i<k;++i){
        int q;cin>>q;
        if(exist(v,q))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    solve();
    return 0;
}