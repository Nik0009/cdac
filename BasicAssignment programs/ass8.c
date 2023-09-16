// 7. WAP to interchange the values of two variables with using third variable.

#include<stdio.h>
int main()
{
  int a=12,b=13;
  a=a+b;
  b=a-b;
  a=a-b;

  printf("a:%d\nb:%d",a,b);

}