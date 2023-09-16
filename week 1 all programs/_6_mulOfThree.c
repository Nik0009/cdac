// 6. WAP to calculate multiplication of three numbers.

#include<stdio.h>
int Mul(int a,int b,int c);
void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    Mul(a,b,c);

}
int Mul(int a,int b,int c)
{
    int m;
    m=a*b*c;
    printf("%d",m);
    return 0;
}