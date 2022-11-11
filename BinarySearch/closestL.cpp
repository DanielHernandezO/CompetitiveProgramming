#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

int findM(vi& v,int n){
    int k=0;
    for(int b=v.size()/2;b>=1;b/=2){
        while(k+b<v.size() && v[k+b]<=n)k+=b;
    }
    return k+1;
}
void solve(){
    int n,k;cin>>n>>k;
    vi v(n,0);
    for(int i=0;i<n;++i)cin>>v[i];
    for(int i=0;i<k;++i){
        int q;cin>>q;
        if(q<v[0]){
            cout<<"0"<<endl;
        }else{
            cout<<findM(v,q)<<endl;
        }  
    }    
}
int main(){
    solve();
    return 0;
}