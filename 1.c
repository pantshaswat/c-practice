#include<stdio.h>

void circularshift(int *p1,int *p2, int *p3)
{

    int temp1 = *p1;
    int temp2= *p2;
         *p1= *p3;
        *p2= temp1;
        *p3= temp2;

}

int main()
{
    int x,y,z;
    int *px, *py, *pz;
    
    printf("Enter the values of x,y,z:");
    scanf("%d %d %d",&x,&y,&z);
    px=&x;
    py=&y;
    pz=&z;
    printf("The values of x,y,z before circular shift are: %d, %d, %d\n",x,y,z);

    circularshift(&x,&y,&z);
    printf("The values of x,y,z after circular shift are: %d, %d, %d",x,y,z);
}