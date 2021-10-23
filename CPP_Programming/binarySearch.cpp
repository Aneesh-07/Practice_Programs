#include<iostream>
using namespace std;
int binarySearch(int a[],int n, int k)
{
    int s=0,e=n; 
    while(s<=e)
    {
        int mid=(e+s)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]>k) e=mid-1;
        else if(a[mid]<k) s=mid+1;
    }
    return -1;
    
}
int main()
{
int n,k;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cin>>k;
cout<<binarySearch(a,n,k);
    return 0;
}