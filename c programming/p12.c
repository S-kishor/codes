#include<stdio.h>
int main()
//assigning grades by using if else
{
    int m;
    printf("Enter marks \n");
    scanf("%d",&m);
    if(100<=m>90){
        printf("o");
    }
    else if(m>=80){
        printf("e");
    }
    else if(m>=70){
        printf("a");
    }
    else if (m>=60){
        printf("b");

    }
    else if (m>=50){
        printf("c");

    }
    else if (m>=40){
        printf("d");

    }
    else {
        printf("fail");
    }
    return 0;
}