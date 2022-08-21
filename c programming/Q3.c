//  checking whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int num,r,rev=0,t;
    printf("enter number :");
    scanf("%d",&num);
    t=num;
    while(num>0){
    r=num%10;
    rev=(rev*10)+r;
    num=num/10;
    }
    if(rev==t){
        printf("%d is a palindrome number",rev);

    }
    else{
        printf("%d is not a palindrome number",rev);
    }
    return 0;
}