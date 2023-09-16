#include<stdio.h>
#include<conio.h>
int main()
{
   int n,a,b,c,d,sum=0;
   printf("Enter any 4 digit number:");
   scanf("%d",&n);
  // n=1234;
   a=n/1000;         // 1234/1000= 1(1.234) becz a is in int form
   b=n/100%10;       // 1234/100%10= 12.34%10 = 2
   c=n/10%10;        // 1234/10%10= 123.4%10 = 3
   d=n%10;           // 1234%10= 4
   sum = a+b+c+d;    // sum= 1.234 + 2 + 3 + 4 = 10
   
   printf("Sum=%d",sum);

}