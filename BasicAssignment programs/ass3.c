//3. WAP to calculate simple interest. si=(p*n*r)/100.
#include<stdio.h>
int main()
{
    float si=0,p,r,n;

    printf("Enter vaules of p,n and r:\n");
    scanf("%f%f%f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("si =%.2f",si);
   

}