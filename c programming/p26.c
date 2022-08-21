// checking anumber wheteher palindrome or not
#include<stdio.h>
int main()
{
    int n,r,q,t;

    printf("enter a number:");
    scanf("%d",&n);
    t=n;
    q=0;
    while(n>0){
    r=n%10;
    q=(q*10)+r;
    n=n/10;
    }
    if(q==t){
        printf("the number is palindrome");
    }
    else{
        printf(" not a palindrome num");
    }
    return 0;



}