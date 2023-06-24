#include<bits/stdc++.h>
using namespace std;

// void funct(int ind ,int sum,int k,int n,vector<int>& arr,vector<int>&v,int *c){
//     if(ind>n-1) {
//         if(sum==k){
//             (*c)++;
//         }
//         return;
//     }
//     arr.push_back(v[ind]);
//     sum+=v[ind];
//     funct(ind+1,sum,k,n,arr,v,c);
//     arr.pop_back();
//     sum-=v[ind];
//     funct(ind+1,sum,k,n,arr,v,c);
// }

// int main(){
//     vector<int> v={1,2,3,2,4},arr;
//     int c = 0;
//     int n = v.size();
//     int k = 0;
//     funct(0,0,k,n,arr,v,&c);
//     cout<<c;
// }
int funct(int ind ,int sum,int k,int n,vector<int>& arr,vector<int>&v){
    if(ind>n-1) {
        if(sum==k){
            return 1;
        }
        return 0;
    }
    arr.push_back(v[ind]);
    sum+=v[ind];
  int l=  funct(ind+1,sum,k,n,arr,v);
    arr.pop_back();
    sum-=v[ind];
    int r = funct(ind+1,sum,k,n,arr,v);
    return l+r;
}

int main(){
    vector<int> v={1,2,3,2,4},arr;
    int c = 0;
    int n = v.size();
    int k = 4;
    cout<<    funct(0,0,k,n,arr,v);

}