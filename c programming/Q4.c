// checking the number whether it is armstrong number or not
#include<stdio.h>
int main()
{
    int num,r,sum=0,a;
    printf("enter a number :");
    scanf("%d",&num);
    for(a=num;num!=0;num=num/10){
        r=num%10;
        sum=sum+(r*r*r);

    }
    if (sum==a){
        printf("%d is an armstrong number",sum);

    }
    else{
        printf("%d is not an armstrong number",sum);

    }
}
