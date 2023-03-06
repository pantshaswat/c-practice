#include<stdio.h>
int ser(int arr[],int key, int n)
{
    for ( int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            printf("Key is in index %d\n",i);
        }
        
    }
    
}


int main()
{
    int n,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Vaule for index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the key :");
    scanf("%d",&key);

    ser(arr,key,n);
    
}