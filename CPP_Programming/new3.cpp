#include <bits/stdc++.h>
using namespace std;
int main()
{
int MAX,LEN;
cin>>MAX>>LEN;
string a[LEN];
int b[LEN],c[LEN],count=0,i,j;
for(i=0;i<LEN;i++){cin>>a[i]>>b[i];c[i]=b[i];}
for(i=0;i<LEN;i++){
if(MAX-c[i]>0){
for(j=0;j<LEN;j++){//cout<<"hello there";
if(c[i]==b[j]){//cout<<"hello there";
cout<<"I can afford "<<a[i]<<endl;
MAX-=c[i];
break;
}
}
}
else{
for(j=0;j<LEN;j++){
if(c[i]==b[j]){//cout<<"hello there";
cout<<"I can't afford "<<a[i]<<endl;
count++;
break;
}
}
}
}
(count==LEN) ? cout<<"I need more Dollar!" : cout<<MAX;
return 0;
cout<<"char name[MAX][LEN]; int price[MAX] afford[MAX] for(i=0;i<items;i++)";
}