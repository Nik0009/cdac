// 7. WAP to interchange the values of two variables with using third variable.

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
  int temp=a;
  a=b;
  b=temp;
   printf("\nafter swap:\na=%d,b=%d",a,b);
  printf("a=%d,b=%d",a,b);

}