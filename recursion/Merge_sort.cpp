#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int l,int m,int r){
    vector<int> temp;
    int low=l,high=m+1;
        while(low<=m&&high<=r){
            if(arr[low]<arr[high])  temp.push_back(arr[low++]);
            else    temp.push_back(arr[high++]);

        }

        while(low<=m)   temp.push_back(arr[low++]);
        while(high<=r)  temp.push_back(arr[high++]);

        for(int i=l;i<=r;i++)   arr[i] = temp[i-l];

}
void mergeSort(vector<int>&arr,int l,int r){
    if(l>=r) return;
    int m = (l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
int main()
{
 
 vector<int> v = { 1,2,56,3,63,4,2,6,1,8,9,646,38,9};
 mergeSort(v,0,v.size()-1);
 for(auto i: v) cout<<i<<" ";
return 0;
}