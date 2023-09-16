// 9. WAP to add, sub, mul, div, mod two variables and print the result.

#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

void main()
{
    int x,y;
    printf("enter two values:");
    scanf("%d%d",&x,&y);
    printf("\nsum=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",add(x,y),sub(x,y),mul(x,y),div(x,y),mod(x,y));
}

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
     return a*b;
}
int div(int a,int b){
     return a/b;
}
int mod(int a,int b){
 return a%b;
}
