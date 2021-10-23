#include <stdio.h>
#include<iostream>
using namespace std;
void printSums(int N)
{
    //to find maximum chain length to do question with maths formula
    // N=a+ a+l + a+2l........l
    //N=(l+1)a+(1+2+3+4..l)
    //N=(l+1)a+l(l+1)/2
    //a=(N-(l(l+1)/2)/(l+1)
    //this will give the first term for AP 
    int sum=0,r=0;
    float a;
    while(sum<N)
    {
        r+=1;
        sum+=r;
    }
    
    for(int l=r;l>0;l--)
    {
        a=(N-(l*(l+1)/2))*1.0/(l+1);
        if(a==(int)a){ for(int j=0;j<=l;j++) cout<<a+j<<" ";  cout<<endl;}
    
        
    }
    
 /*   int s,e;
    
    for(s=1;s<=N;s++)
    {
        e=s+1;
        int sum=s+e;
        while(sum<N){
            e+=1;
            sum+=e;
        }
        if(sum==N){
            for(int i=s;i<=e;i++) cout<<i<<" ";
            cout<<endl;
            }
            
    }  */
}
int main()
{
    int n;
    cin>>n;
    printSums(n);

	return 0;
}