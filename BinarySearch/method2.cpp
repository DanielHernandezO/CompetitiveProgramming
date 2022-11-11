#include<bits/stdc++.h>
using namespace std;

int main(){
    int k=0,n=1,x=1;
    vector<int> v(10,0);
    for(int b=n/2;b>=1;b/=2){
        while(k+b<n && v[k+b]<=x)k+=b;
    }
    if(v[k]==x){
        //Found
    }
    return 0;
}

// number of elementes whose values is x
void valuesIsX(int x,vector<int> v){
    auto a = lower_bound(v.begin(), v.end(), x);
    auto b = upper_bound(v.begin(), v.end(),x);
    cout<<b-a<<endl;
} 