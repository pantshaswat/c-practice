#include<stdio.h>
struct student
{
    char name[30];
    int age;
    int marks;
}s[3];
int sort(struct student s[])
{

}
int main()
{   int i,j,percent;
for ( i = 0; i < 5; i++)
{  int sum=0;
     printf("Enter the name and age of the no. %d student: ",i+1);
    scanf("%s %d",s[i].name,&s[i].age);
    for ( j = 0; j < 3; j++)
    {
        printf("Enter the marks no. %d student: ",j+1);
    scanf("%d",&s[j].marks);
    sum+=s[j].marks;
    }
    sort(s);
    

}

 





    
    return 0;
}
