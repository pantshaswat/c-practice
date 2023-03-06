#include <stdio.h>
int rec(int n)
{
    if(n!=0){
        return (2*rec(n-1));
    }
        else
        return 1;
        
    }
int main()
{
    int n;
  printf("Enter an integer: ");
  scanf("%d",&n);
 int result = rec(n);
 printf("The 2^%d is %d",n,result);
}

