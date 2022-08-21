// wap to print sum of first n numbers using loop
#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("enter number \n");
    scanf("%d",&n);
    // i=0;
    // while(i<=n){
    //     sum= sum+i;//sum+=i
    //     i++;
    // }
    for(i=0;i<+n;i++){
        sum+=1;
    }

    printf("the sum of first %d numbers is %d",n,sum);
    return 0;
}
