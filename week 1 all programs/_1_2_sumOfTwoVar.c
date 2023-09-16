// 1. WAP to calculate the sum of two variables.
// 2. WAP to calculate the sum of two variables whose value is p=2.5 and q=3.6.

#include<stdio.h>
int sum(float a,float b);
void main()
{
    // int a,b;
    // printf("enter two values:");
    // scanf("%d%d",&a,&b);
    // sum(a,b);
    float p=2.5,q=3.6;
    sum(p,q);
}

int sum(float a,float b)
{
    // int sum=0;
    // sum=a+b;
    // printf("sum=%d",sum);
    int sum=0;
    sum=a+b;
    printf("%d",sum);

}