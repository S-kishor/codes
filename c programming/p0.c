#include<stdio.h>
int main()
//checking smallest numbers among 2


{
  float a,b;
  printf("Enter number a : ");
  scanf("%f",&a);
  printf("Enter number b : ");
  scanf("%f",&b);
  if(a<b)
  {
    printf("%f is smaller",a);

  }
  else if (a=b)
  {
    printf("a is equal to b");
  }
  
  else
  {
    printf("%f is smaller",b);

  }
return 0;
}