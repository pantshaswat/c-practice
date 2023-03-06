#include<stdio.h>
struct time
{
    int hr;
    int min;
    int sec;
};
struct time sum(struct time t1, struct time t2);
int main()
{   struct time t1,t2,result;
    printf("Enter 1st time in hr, min, sec: ");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter 2nd time in hr, min, sec: ");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
    result = sum(t1,t2);
    printf("hour = %d, min=%d, sec=%d",result.hr,result.min,result.sec);
    return 0;
}
struct time sum(struct time t1, struct time t2)
{   struct time result;
    result.sec=t1.sec+t2.sec;
    result.min=t1.min+t2.min+result.sec/60;
    result.hr=t1.hr+t2.hr+result.min/60;
    result.sec=result.sec%60;
    result.min=result.min%60;
    
   /* if (result.sec>=60)
    {
        result.sec=result.sec%60;
        result.min++;
    }
    if (result.min>=60)
    {
        result.min=result.min-60;
        result.hr++;
    }*/
    
     
    
    return result;
}