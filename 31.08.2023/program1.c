// wap to enter a character from user and check whwther it is vowel or consonants.

#include<stdio.h>
void main()
{
    char ch ;
    printf("enter a character:");
    scanf("%c",&ch);

    if((ch=='a' || ch=='e' || ch== 'i' || ch=='o' || ch=='u') || (ch=='A' || ch=='E' || ch== 'I' || ch=='O' || ch=='U') )
    {
        printf("%c is a vowel.",ch);
    }
    else
    {
        printf("%c is a consonant.",ch);
    }

}