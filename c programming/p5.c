#include<stdio.h>
int main()
//checking leap year
{
    int year;
    printf("choose a year: ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("yes");

    }
    else if (year%100==0)
    {
        printf("no");

    }
    else if(year%4==0)
    {
        printf("yes");

    }
    else
    {
        printf("not a leap year");
    }
return 0;    
}