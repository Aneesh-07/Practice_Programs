#include<bits/stdc++.h>
using namespace std;

void fur(int f,int l,vector<int> &v){
    if(f>l) return;
    swap(v[l],v[f]);
    fur(++f,--l,v);
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto i=0;i<n;i++){
        cin>>v[i];
    }

    fur(0,n-1,v);
    for(auto i:v){
        cout<<i<<" ";
    }
}