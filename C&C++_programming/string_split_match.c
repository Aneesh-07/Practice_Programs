#include <stdio.h>
#include <string.h>

int check_lapin(char s[])
{
  int arr1[26],arr2[26],n,i,j;
  for(i=0;i<26;i++)
  {
      arr1[i]=0;
      arr2[i]=0;
  }
   n=strlen(s);
   for(i=0,j=n-1;i<j;i++,j--)
   {
        arr1[s[i]-97]++;
        arr2[s[j]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i]);
        return 0;
    }
    
    return 1;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
      char s[1000];
      for(i=0;s[i]!='\0';i++)
        scanf("%c",&s[i]);
      if(check_lapin(s))
        printf("YES\n");
        else
        printf("NO\n");
      
    }

	return 0;
}
