#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
//  vector<int> dp(n+1,-1);
//  dp[0] =0 ,dp[1] = 1;
//  for(int i=2;i<=n;i++){
//     dp[i] = dp[i-1]+dp[i-2];
//  }
int prev2 = 0, prev =1,curri = 0;

for(int i=2;i<=n;i++){
    curri = prev + prev2;
    prev2 = prev;
    prev = curri;
}
cout<< curri;
//  cout<< dp[n];
return 0;
}