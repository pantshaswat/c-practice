#include<stdio.h>
int mul( int r1, int c2, int c1, int mat1[][c1],int mat2[][c2])
{   int sum,i,j,k;
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            sum = 0;
            
            for ( k = 0; k < c1; k++)
            {
               sum += mat1[i][k] * mat2[k][j];
            }
            printf("%d\t",sum);
        }
        printf("\n");
    }
    
    
    
}

int main()
{
    int i,j,r1,c1,r2,c2;
    printf("Enter the rown and columns of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rown and columns of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    int mat1[r1][c1];
    int mat2[r2][c2];
    if (c1==r2)
    {   
        printf("Enter 1st matrix:");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c1; j++)
            {
               scanf("%d",&mat1[i][j]);
            }     
        }
       
        printf("Enter 2nd matrix:");
        for ( i = 0; i < r2; i++)
        {
            for ( j = 0; j < c2; j++)
            {
               scanf("%d",&mat2[i][j]);
            }
            
        }
        
        mul(r1,c2,c1,mat1,mat2);


    }
    else printf("matrix cant be multiplied");
    
}