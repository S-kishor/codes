#include<stdio.h>
int main()
{
    //program to check a number divisible by 3,5,7 or 11
    int n;
    printf("enter number :");
    scanf("%d",&n);
    if(n%3==0){
        printf("divisible by 3 \n");

    }
    if(n%5==0){
        printf("divisible by 5 \n");

    }
    if(n%7==0){
        printf("divisible by 7 \n");
    }
    if(n%11==0){
        printf("divisible by 11 \n");
    }
    else{
        printf("not divisible by 3,5,7,11 \n");

    }
    return 0;
}