//printing multiplication table using loop taken by user input
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter number : \n");
    scanf("%d",&n);
    i=1;
    while(i<=10){
        printf("%d \n",n*i);
        i++;
    }
    return 0;
}