#include<bits/stdc++.h>
using namespace std;

void fur(int i,int n,string &v){
    if(i>=n/2) {cout<<"valid "; return;}
    if(v[i]!=v[n-1-i]) {cout<<"not a plaindrome"; return;}
    fur(++i,n,v);
}

int main(){
  
    string v;
cin>>v;
int n = v.size();
    fur(0,n,v);
}