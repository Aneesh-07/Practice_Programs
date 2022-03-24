#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    int cnt=0;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	    for(int i=0,j=0;i<n,j<n;i++,j++){
	        if(a[i]<b[j])
	        cnt++;
	        else{
	            for(j=i;j<n;j++){
	                if(a[i]<b[j]){
	                cnt++;
	                break;
	                }
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}
}