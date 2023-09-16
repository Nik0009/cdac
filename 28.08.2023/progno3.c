// Wap to find sum of individual number in four digit number.

#include<stdio.h>
#include<conio.h>
int main()
{
   int n,sum=0;
//    printf("Enter the number:");
//    scanf("%d",&n);
n=1234;
   while (n!=0) 
   {
       sum=sum + n%10 ;         // sum=0+ 1234%10 = 4 
       n=n/10;                  // n= 1234/10= 123.4 going in while loop
   }
   printf("Sum=%d",sum);

}