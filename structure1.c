#include<stdio.h>
struct employee 
{
    
    char name [50];
    int salary;
    char department[50];
};

int emp(struct employee s[], int n)
{   int i;
     for ( i = 0; i < n; i++)
    {
         printf("Enter name, salary and department of the employee: ");
      scanf("%s %d %s",s[i].name,&s[i].salary,s[i].department);
    }

    for ( i = 0; i < n; i++)
    {
        printf("The name, salary and department of the employee is : ");  
        printf("%s %d %s\n",s[i].name,s[i].salary,s[i].department);
    }
    
}

int main()
{ 
    int n;
    printf("Enter the number of Employees: ");
    scanf("%d",&n);
    struct employee s[n];
    
   emp(s,n);
   
    
    return 0;
}
