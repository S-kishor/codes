#include<stdio.h>
int main()
// Ternary operator
{
    int age;
    printf("enter age: \n");
    scanf("%d",&age);
    age<= 18 ? printf("you are adult"): printf("you are not a adult");
return 0;
}