//14. WAP to convert the temperature Fahrenheit degree into degree celcius. 
//Celsius = ((Fahrenheit - 32) / (1.8)) & Fahrenheit = (1.8* Celsius) + 32;

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