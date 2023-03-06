#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    printf("Enter the required no of numbers:");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*) malloc (n* sizeof(int));
    for ( i = 0; i < n; i++)
    {
       ptr[i]=(2*i)+1;
    }
    printf("your numbers are: \n");
   for ( i = 0; i < n; i++)
    {
        
        printf("%d\n",*(ptr+i));
    }
    

    
    return 0;
}
