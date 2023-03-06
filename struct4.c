#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
    char bp[30];
}s[3];
    int check(struct student s[])
    {   int i,j,c=0;
        
            for ( j = 0; j < 3; j++)
            {
                if (strcmp(s[j].bp,s[j+1].bp)==0);
            {
              c++;
            }
            
             }
        printf("%d students are neigh",c);
        
    }
int main()
{   int i;
    for ( i = 0; i < 3; i++)
    {   printf("Enter the name, age and address of the student:\n");
        scanf("%s %d %s",s[i].name,&s[i].age,s[i].bp);
    }
    check(s);
    return 0;
}
