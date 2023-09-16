// Wap to interchange two variables without using thrid variable

#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=5;

    // logic-1
    // a=a+b;                          // a=10+5=15
    // b=a-b;                          // b=15-5=10
    // a=a-b;                          // a=15-10=5
   

    //logic-2
  //  a=a*b;                           // a=10*5=50
  //  b=a/b;                           // b=50/5=10
  //  a=a/b;                           // a=50/10=5
   

  /* logic-3 ( with the help of bitwise xor ) :- 1^0=1 , 1^1=0
  a=a^b;                             // a=10(1010)^5(0101)=15(1111)
  b=a^b;                             // b=15(1111)^5(0101)=10(1010)
  a=a^b;                             // a=15(1111)^10(1010)=5(0101)
  */
    printf("value of a =%d\n",a);
    printf("value of b =%d",b);

 // logic-4
//  a=(a*b)/(b=a);
//  printf("\nafter swap: a=%d,b=%d",a,b); 

    



}