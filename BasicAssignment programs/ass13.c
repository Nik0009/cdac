//13. WAP to calculate the total and avg of five subjects.

#include<stdio.h>
void main()
{
    float sub1,sub2,sub3,sub4,sub5,total_marks,avg;
    printf("Enter students five sunjects marks:");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total_marks=sub1+sub2+sub3+sub4+sub5;
    printf("total marks = %.2f",total_marks);

    avg=total_marks/5;
    printf("\naverage marks = %.2f",avg);

}