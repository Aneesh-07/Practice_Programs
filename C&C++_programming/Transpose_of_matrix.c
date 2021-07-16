#include<stdio.h>

int main()
{
    int i,j,A[3][3],T[3][3];
    
    printf("Enter a 3x3 Matrix\n");            //Input of matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
       printf("Enter A[%d][%d] Element : ",i,j);
       scanf("%d",&A[i][j]);
       }
    }
printf("Your matrix is\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
       printf("%d\t",A[i][j]);
       }
       printf("\n");
    }

    for (int i = 0; i <3; ++i)                   //Computing transpose
    {
  for (int j = 0; j < 3; ++j)
   {
    T[j][i] = A[i][j];
  }

}
printf("Your transposed matrix is: \n");
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
       printf("%d\t",T[i][j]);
       }
       printf("\n");
    }
}