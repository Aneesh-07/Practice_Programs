#include <bits/stdc++.h>
using namespace std;


int partition(vector<int>&arr, int l, int r){
    int pivot = arr[r],high = r;

    while(l<r){
        while(arr[l]<pivot && l<r) l++;
        while(arr[r]>=pivot && r>l) r--;

        if(l<r) swap(arr[l],arr[r]);
    }
    swap(arr[r],arr[high]);
    return r;

}


void quickSort(vector<int>&arr,int l,int r){
    if(l>=r) return;
    int mid = partition(arr,l,r);
    quickSort(arr,l,mid-1);
    quickSort(arr,mid+1,r);
}


int main()
{
 vector<int> v = {1423,25245,4622342 ,333 ,4,626,64,36,2,15,5452,5,5};
 quickSort(v,0,v.size()-1);

 for(auto i : v)    cout<<i<<" ";
return 0;
}