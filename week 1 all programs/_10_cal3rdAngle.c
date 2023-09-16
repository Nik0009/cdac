// 10. WAP to calculate the third angle when two angles are input through the keyboard.
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter two angles:");
 scanf("%d%d",&a,&b);
 c=180-(a+b);
 printf("third angle is %d.",c);

}