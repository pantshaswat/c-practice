#include<stdio.h>
int fact(int rem)
{
  int i=1,factorial=1;
  while (i<=rem)			
    {
       factorial *=i;
       i++;		
 
}
   return factorial;
}
int main()
{
    int n,sum=0,rem,on;
    printf("Enter any number: ");
    scanf("%d",&n);
    on=n;
    while (n!=0)
    {
        rem=n%10;
    int factorial = fact(rem);
    sum+=sum+factorial;
    n=n/10;
    
}
if (sum==on)
{
    printf("Its a strong number");
}

return 0;
    }
    
    
