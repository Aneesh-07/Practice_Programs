#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int x[10];
    for(int i=0;i<10;i++)
    cin>>x[i];

sort(x,x+10);
for(int i=0;i<10;i++)
cout<<x[i]<<" ";


return 0;
}
