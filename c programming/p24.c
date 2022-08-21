//to print sum of dgits of a number
#include<stdio.h>
int main()
{
    int n,r,q;
    printf("enter number : ");
    scanf("%d",&n);
    q=0;
    while(n>0){
        r=n%10;
        q=q+r;
        n=n/10;

    }
    printf("%d",q);
    return 0;
}