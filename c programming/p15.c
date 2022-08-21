#include<stdio.h>
int main ()
{
    //if else statements
    int age;
    printf("enter ur age \n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are adult \n");
        printf("you can vote and drive \n");

    }
    else if(12<age && age<=19){
        printf("you are teenager \n");
    }
    else{
        printf("you are a child \n");
    }
    return 0;
    
}