#include<stdio.h>
int main()
// printing smallest of three numbers

{
    int a,b,c ;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    printf("enter number c: ");
    scanf("%d",&c);
    if(a<=b && a<=c)
    {
        printf("%d is smaller",a);
    }
    else if(b<=c && b<=c)
    {
        printf("%d is smaller",b);

    }
    else{
        printf("%d is smaller",c);
    }
return 0;
}