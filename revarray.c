#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = n; i >=0; i--)
    {
        printf("%d\n",a[i]);
    }
    
    
    return 0;
}
