// 4.WAP to check whether the character is vowel or consonant.
#include<stdio.h>
void main()
{
   char ch;
   printf("enter character for checking whether it is vowel or consonant:");
   scanf("%c",&ch);

   if ((ch =='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch =='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) 
   {
      printf("%c is character vowel.",ch);
   }
   else 
   {
     printf("%c is character consonant.",ch);
   }
   

}