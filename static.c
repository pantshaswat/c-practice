#include<stdio.h>
void display()
{
    static int n=2;
    n+=5;
    printf("%d\n",n);
}
int main() 
{
    display();
    display();

    return 0;
}
