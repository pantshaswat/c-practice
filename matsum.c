#include <stdio.h>
int matsum(int mat[][4])
{   int i,j;
    printf("Your matrix is:\n");
     for(i=0;i<4;i++)
   {    int sum=0;
       for(j=0;j<4;j++)
       {
           printf("%d\t",mat[i][j]);
            sum+=mat[i][j];
       }
        printf("sum = %d",sum);
       printf("\n");
   }
}

int main() {
   int mat[4][4],i,j;
   printf("Enter the matrix:");
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           scanf("%d",&mat[i][j]);
       }
   }
   matsum(mat);
    
    return 0;
}