#include<stdio.h>
int gcd(int,int);
int main(){
    int a,b,LCM,GCD;
    printf("enter the  values of a and b");
    scanf("%d %d",&a,&b);
    GCD=gcd(a,b);
    LCM=(a*b)/GCD;
    printf("LCM =%d",LCM);
    return 0;
}