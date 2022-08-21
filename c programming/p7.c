#include<stdio.h>
int main ()
{
    int a;
    printf("input a number:");
    scanf("%d",&a);
    if (a%3==0)
    {
        printf("a  is divisble by 3 \n");
    }
    if(a%9==0)
    {
        printf("a is divisble by 9 \n");
    }
    else
    {
        printf("the number is not divisible by 3 and 9");
    }
    
return 0;   
}