#include<bits/stdc++.h>
using namespace std;

void fun(int ind,vector<int> &arr,vector<int> &v){
    if(ind>=v.size()){
        for (auto i:arr) cout<<i<<" ";
        cout<<"end"<<"\n";
        return;
    }


    arr.push_back(v[ind]);
    fun(ind+1,arr,v);
    arr.pop_back();
    fun(ind+1,arr,v);
}
    double myPow(double x, int n) {
        if(n<=1) return x;
        return x*myPow(x,n-1);
    }
int main(){
    // double n;
    // cin>>n;
    // int x;
    // cin>> x;
    // cout<<myPow(n,x)
    int n= 5;
    vector<int> arr,v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    fun(0,arr,v);
}