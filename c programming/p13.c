#include<stdio.h>
int main()
// assigning grades by switch operator
{
    int m;
    printf("enter marks : \n");
    scanf("%d",&m);
    switch(m/10){
        case 10:
        case 9: printf("o");
        break;
        case 8: printf("e");
        break;
        case 7: printf("a");
        break;
        case 6: printf("b");
        break;
        case 5: printf("c");
        break;
        case 4: printf("d");
        break;
        case 3:
        case 2:
        case 1:
        case 0: printf("fail");
        break;
        default: printf("invalid marks");

    }
    return 0;
}