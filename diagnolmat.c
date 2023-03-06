#include<stdio.h>
int main()
{
    int i,j,r,c;
     printf("Enter the rown and columns of matrix: ");
    scanf("%d %d",&r,&c);
    
    int  mat[r][c];
      
        printf("Enter 1st matrix:");
        for ( i = 0; i < r; i++)
        {
            for ( j = 0; j < c; j++)
            {
               scanf("%d",&mat[i][j]);
            }     
        }
         int p=0;
         for ( i = 0; i < r; i++)
        {  
            for ( j = 0; j < c; j++)
            {
              if (i!=j && mat[i][j]!=0)
              {
                p++;
              }
              
            }     
           
            
        }
             if (p>=1)
            {
                printf("Its not a diagnolmatrix");
            }
            else printf("Its a diagnol matrix");

    return 0;
}
