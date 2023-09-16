// ramesh basic salary is i/p thgrough keyboard his DA = 40% of BS, HRA=25% of BS, PF=20% of BS, TA=30% of BS. calcuate gross and net salary.

#include<stdio.h>
#include<conio.h>
int main()
{
  float bs,da,hra,pf,ta,gs,ns;
  printf("enter basic salary:");
  scanf("%f",&bs);

  da=0.4*bs; 
  hra=0.25*bs;
  pf=0.20*bs;
  ta=0.30*bs;

  gs=bs+hra+da+ta;
  printf("Gross Salary is %.2f",gs);

  ns=gs-pf;
  printf("\nNet Salary is %.2f",ns);

}