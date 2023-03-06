#include<stdio.h>
#include<stdlib.h>

void crazy (char s[])
{
    int i=0;
    while(s[i]!=0)
    {
        if (s[i]>='A' && s[i]<='Z')  
        {
           printf("#");
        }
        
        else if (s[i]>='a'&& s[i]<='z')
        {
            printf("&");
        }
        else printf("%c",s[i]);
        i++;
    }
    
}
/*int main()
{
    char s[30];
    printf("Enter any strings: ");
    gets(s);
    crazy(s);
    return 0;
}*/


