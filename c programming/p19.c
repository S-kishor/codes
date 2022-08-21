// printing first n numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number \n");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
}