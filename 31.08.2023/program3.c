// wap for addition,subtration,multiplication and division using switch case.

#include<stdio.h>
void main()
{
  int n,add,sub,mul,div,a,b,s;
  printf("Select only one option:\n1.addition.\n2.subtration.\n3.multiplication.\n4.division.\n");
  scanf("%d",&n);

  switch (n)
  {
  case 1:
     printf("enter two numbers for additon:");
     scanf("%d%d",&a,&b);
     s=a+b;
     printf("Addition:%d",s);
     break;

  case 2:
     printf("enter two numbers for subtration:");
     scanf("%d%d",&a,&b);
     s=a-b;
     printf("Subtration:%d",s);
     break;

   case 3:
     printf("enter two numbers for multiplication:");
     scanf("%d%d",&a,&b);
     s=a*b;
     printf("Multiplication:%d",s);
     break;

   case 4:
     printf("enter two numbers for division:");
     scanf("%d%d",&a,&b);
     s=a/b;
     printf("Division:%d",s);
     break;       
  
  default:
      printf("you enter wrong option !!! please select correct option !!!");
      break;
  }

}