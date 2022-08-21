
#include<stdio.h>
int main()
{
   int phy,che,bio;
   float per;
   printf("enter your phy marks: ");
   scanf("%d",&phy);
   printf("enter your che marks :");
   scanf("%d",&che);
   printf("enter your bio marks :");
   scanf("%d",&bio);
   per=((phy+che+bio)/3);
   if((per<40)||(phy<33)||(che<33)||(bio<330)){
       printf("you got %f percentage and u r fail \n",per);
   }
   else
   {
       printf("you got %f percentage and u r passed \n",per);
   }
}