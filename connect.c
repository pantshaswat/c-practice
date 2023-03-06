#include <stdio.h>
#include "crazy.c"

int main()
{
    char s[30];
    printf("Enter any strings: ");
    gets(s);
    crazy(s);
    return 0;
}
