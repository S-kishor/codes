#include<stdio.h>
//printing factorial of anumber
int main()
{
    int n,i;
    int fact=1;
    printf("enter number:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        fact=fact*i;
        i++;

    }
    printf("the factorial is %d",fact);
    return 0;

}