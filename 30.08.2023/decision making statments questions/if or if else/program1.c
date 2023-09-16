// 1.wap to calculate total amount if purchase amount is greater than 1500 then discount is rs.200

#include<stdio.h>
void main()
{
   float pa,ta;
    printf("Enter purchase amount:");
    scanf("%f",&pa);

    if (pa>1500)
    {
       float a=pa;
        ta=a - 200;
        printf("total amount=%.2f",ta);
    }
    else{
        printf("Please Enter purchase amount above 1500 !!!");
    }
    
}
    