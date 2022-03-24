#include <iostream>
using namespace std;
int findmax(int *Count)
{
    int max=0,c;
    string s;
    cin>>s;
    for(int i=0;i<*Count;i++){ c=0;
    for(int j=1;j<*Count;j++) if(s[i]==s[j]) c+=1;
    if(max<c)max =c;
        
    }
    return ((2*max)+1);
    
}
int main()
{ int t;
string s;
while(t--)
{
int *n;
    cin>>*n;
    cout<<findmax(n);
}
    
    
    return 0;
    
}