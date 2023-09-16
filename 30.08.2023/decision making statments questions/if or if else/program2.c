// 2.WAP to calculate commission if sale amount is greater than 1000 then commission =15%

#include<stdio.h>
void main()
{
    float sa,c;
    printf("Enter sales amount:");
    scanf("%f",&sa);
    if(sa>1000)
    {
        c=sa*15/100;
        printf("Commission=%.2f",c);
    }
   
}