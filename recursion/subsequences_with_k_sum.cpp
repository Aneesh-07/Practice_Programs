#include<bits/stdc++.h>
using namespace std;

void fun(int ind,int sum,int k,vector<int>& arr,vector<int>&v){
    if(ind>v.size()-1){
        if(sum==k) {
            for(auto i:arr) cout<<i<<" ";
            cout<<"\nend\n";

        }
        return;
    }
    arr.push_back(v[ind]);
    sum+=v[ind];
    fun(ind+1,sum,k,arr,v);
    arr.pop_back();
    sum-=v[ind];
    fun(ind+1,sum,k,arr,v);
}

int main(){
    vector<int>v  ={1,2,2,3,4,-2},arr;
    int k=4;
    fun(0,0,k,arr,v);
    
}