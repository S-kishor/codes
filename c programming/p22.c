//printing all the odd numbers from 0 to n using loop
#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int i=0;
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d \n",i); 
        }
        i++;
    }
    // for(i=0;i<=n;i++){
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    // }
    return 0;

}