// 8. WAP to interchange the values of two variables without using third variable.

#include<stdio.h>
int swap(int a,int b);
int c;
void main()
{
    int x,y;
    printf("enter two values:");
    scanf("%d%d",&x,&y);
    printf("before swap:\na=%d,b=%d",x,y);
    swap(x,y);

}

int swap(int a,int b)
{
  a=a+b;
  b=b-a;
  a=a+b;
    printf("\nafter swap:\n");
    printf("a=%d,b=%d",a,b);

}