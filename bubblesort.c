#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the numbers required: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
           if (a[j]>a[j+1])
           {
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
           
        }
        
    }
    printf("The ascending order is: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
    
    return 0;
}
