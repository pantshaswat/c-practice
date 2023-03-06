#include<stdio.h>
struct courseRec
{
    char code[8];
    char title[30];
    int credit;
    int num;

} cRec;

int main()
{
    printf("Enter the user code: ");
    scanf("%s",&cRec.code);
    printf("Enter the number of students: ");
    scanf("%d",&cRec.num);
    cRec.credit=4;
    printf("Enter the sub title: ");
    scanf("%s",&cRec.title);

    printf("%s\t",cRec.code);
    printf("%s\t",cRec.title);
    printf("%d\t",cRec.credit);
    printf("%d\t",cRec.num);
    return 0;
}
