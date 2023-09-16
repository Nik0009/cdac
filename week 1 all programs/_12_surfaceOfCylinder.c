// 12. WAP to calculate the surface of the cylinder.(2*pi*r*h)

#include<stdio.h>
void main()
{
 float pi=3.14,r,h,area;
 printf("Enter height and radius of cylinder:");
 scanf("%f%f",&h,&r);
 area=2.0*pi*h*r;
 printf("surface area is %.2f.",area);

}