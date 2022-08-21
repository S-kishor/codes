// reversing a number
#include<stdio.h>
int main()
{
    int n,r,q;
    printf("enter a number:");
    scanf("%d",&n);
    q=0;
    while(n>0){
    r=n%10;
    q=(q*10)+r;
    n=n/10;
    }
    
    printf("%d",q);
    return 0;



}