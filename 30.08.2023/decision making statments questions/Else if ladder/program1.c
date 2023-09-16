// A student appear in examination of five papers each paper contains 50 marks 
// calculate total and percentage of student and display the grades according to the 
// following condition.
// Percentage Grade
// >=90 A+
// 80 to 89 A
// 70 to 79 B+
// 60 to 69 B
// 50 to 59 C
// 40 to 49 Fail.


#include<stdio.h>
void main()
{
    float sub1,sub2,sub3,sub4,sub5,total_marks,percentage,total=250.00;
    printf("Enter students five papers marks(each paper contains 50 marks):");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total_marks=sub1+sub2+sub3+sub4+sub5;
    printf("total marks = %.2f",total_marks);

    percentage= (total_marks / total) * 100;
    printf("\npercentage = %.2f\n",percentage);


    if (percentage>=90)
    {
        printf("grade 'A+' " );
    }
    else if (percentage>=80 && percentage<=89) 
    {
        printf("grade 'A'");
    }
    else if ( percentage>=70 && percentage<=79)
    {
        printf("grade 'B+'");
    }
    else if (percentage>=60 && percentage<=69)
    {
        printf("grade 'B'");
    }
    else if (percentage>=50 && percentage<=59)
    {
        printf("grade 'C'");
    }
    else
    {
        printf("fail 'F' ");
    }
}
