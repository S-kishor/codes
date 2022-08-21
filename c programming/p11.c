#include<stdio.h>
int main()
{
    int a;
    printf("enter character:");
    scanf("%d",&a);
    if (a>=0 && a<=9)
    {
        printf(" it is anumber");
    }
    else{
        printf("not a number");
    }
    return 0;
}