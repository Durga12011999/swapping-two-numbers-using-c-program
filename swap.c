#include<stdio.h>
int main()
{
  int a,b;
  printf("enter your first number:");
  scanf("%d",&a);
  printf("enter your second number:");
  scanf("%d",&b);
  printf("Before swapping the number is a=%d b=%d \n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After swapping the number is a=%d b=%d",a,b);
  return 0;
}
