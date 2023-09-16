// 5. WAP to calculate area of circle (a cir=pi*r*r).

#include<stdio.h>
int AOC(int r);
void main()
{
    int radius;
    printf("Enter radius of circle:");
    scanf("%d",&radius);
    AOC(radius);

}
int AOC(int r)
{
    int Area;
    float pi=3.14;
    Area=pi*r*r;
    printf("%d",Area);
    return 0;
}