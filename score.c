#include<stdio.h>
int main()
{
    int n,per, score[4] = {86,45,51,61};
    printf("Enter the percent you want: ");
    scanf("%d",&per);
    n=5*per-(86+45+51+61);
    if (n>100 || n<40)
    {
       printf("Its impossible to score");
    }
    else 
    
    
     printf("You have to score %d in your 5th subject",n);
    
    return 0;
}
