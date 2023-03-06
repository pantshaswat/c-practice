#include<stdio.h>
int trans(int r1, int c1, int mat[][c1])
{   int i,j;
    for ( i = 0; i < c1; i++)
    {
        for ( j = 0; j < r1; j++)
        {
            printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }
    
}

int main()
{
    int i,j,r1,c1;
    printf("Enter the rown and columns of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    
    int mat[r1][c1];
   
    
        printf("Enter the matrix:");
        for ( i = 0; i < r1; i++)
        {
            for ( j = 0; j < c1; j++)
            {
               scanf("%d",&mat[i][j]);
            }     
        }
    
       
        
        
        trans(r1,c1,mat);


   
    
}