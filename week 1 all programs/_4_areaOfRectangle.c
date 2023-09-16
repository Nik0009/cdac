// 4. WAP to calculate area of rectangle. (a_rec=l*b).


#include<stdio.h>
int AOR(int l,int b);
void main()
{
    int l,b;
    printf("Enter length & breadth:");
    scanf("%d%d",&l,&b);
    AOR(l,b);

}
int AOR(int l,int b)
{
    int Area;
    Area=l*b;
    printf("%d",Area);
    return 0;
}