#include<bits/stdc++.h>
using namespace std;

void fun(int f,int s,int n){
    if(!n) return;
    cout<<f+s<<"\n";
    fun(s,f+s,--n);
}
int main(){
    int n;
    cin>>n;
    cout<<0<<"\n"<<1<<"\n";
    fun(0,1,n-2);
}