// wap to convert temperature from celsius to fahrenheit and vice versa.

#include<stdio.h>
void main()
{
   float celsius,fahrenheit;
   printf("enter value of celsius for converting celsius to fahrenheit:");
   scanf("%f",&celsius);
   fahrenheit=1.8*celsius+32;
   printf("celsius to fahrenheit is %.2f.",fahrenheit);

   printf("\nenter value of fahrenheit for converting fahrenheit to celsius:");
   scanf("%f",&fahrenheit);
   celsius=(fahrenheit-32)/1.8;
   printf("celsius to fahrenheit is %.2f.",celsius);

}