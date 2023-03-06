#include<stdio.h>

int main()
{
    int n,rem,count=0,orgn;
    printf("Enter the number:");
    scanf("%d",&n);
  orgn = n;
    while (n!=0)
    {
       rem=n%10;
       count=count*10 + rem;
       n=n/10;
    
}
if (orgn == count)
printf("given number is palindrom");
return 0;
}