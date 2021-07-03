#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter the Elemnts of first matrix \n");//To take user input of 1st matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
         
        }    
    }
    printf("\n Enter elemnts of Second matrix");//To take user input of 2nd matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element B[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]);
         
        }    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           C[i][j]=0;
            for(int k=0;k<3;k++)
            {
                
                C[i][j] =C[i][j]+(A[i][k]*B[k][j]);     /*Formula to calculate multiplication of matrix
                                                        and store in third matrix*/
            }

         
        }    
    }
    printf("The multiplied matrix is\n");//To print third matrix
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d\t",C[i][j]);
         
        }    
        printf("\n");
    }
}