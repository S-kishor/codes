#include<stdio.h>
int main()
// ckecking whether alphabet is lower or upper case
{
    char c;
    printf("enter aplhabet :");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    {
        printf("upper case");
    }
    if(c>='a' && c<='z')
    {
        printf("lower case");
    }

    else{
        printf("not a english aplhabet");
    }
    return 0;
}  