// 9. WAP to add, sub, mul, div, mod two variables and print the result.

#include<stdio.h>
int main()
{
 int a,b,add,sub,mul,div,mod;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);

 add=a+b;
 sub=a-b;
 mul=a*b;
 div=a/b;
 mod=a%b;

 printf("addition of two numbers is %d\n",add);
 printf("substration of two numbers is %d\n",sub);
 printf("multiplication of two numbers is %d\n",mul);
 printf("division of two numbers is %d\n",div);
 printf("modulus of two numbers is %d\n",mod);


}