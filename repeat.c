#include<stdio.h>
struct time
{
    int hr ;
    int min ;
    int sec ; 

};

struct time sum( struct time t1 , struct time t2 );



int main()
{
        struct time t1 , t2 , result ;
        printf("For time 1 :\n");
        printf("Enter time in hours , mins and secs:");
        scanf("%d%d%d" , &t1.hr ,&t1.min , &t1.sec);
        
        printf("For time 2 :\n");
        printf("Enter time in hours , mins and secs:");
        scanf("%d%d%d" , &t2.hr ,&t2.min , &t2.sec);

    result =  sum ( t1 , t2);

    printf("Sum : \n Hour = %d\nMinutes= %d\nSeconds=%d " , result.hr , result.min , result.sec);
    

 return 0;
}

struct time sum(struct time t1 , struct time t2 )
{
    struct time result ; 
    
    result.hr = t1.hr + t2.hr ;
    result.min = t1.min + t2.min ;
    result.sec = t1.sec + t2.sec ;

    while ( result.sec >= 60 )
    {
        result.sec = result.sec - 60 ;
        result.min++ ;
    }
    while ( result.min >= 60 )
    {
        result.min = result.min - 60 ;
        result.hr++ ;
    }

    return result ; 
    
}

