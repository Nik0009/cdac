// 2.WAP to check greater of four numbers.

#include<stdio.h>
void main()
{
   int a,b,c,d;
   printf("Enter values of four numbers:");
   scanf("%d%d%d%d",&a,&b,&c,&d);

   if (a>b)
   {
      if (a>c)
      {
          if (a>d)
          {
            printf("%d is greater.",a);
          }
          else
          {
            printf("%d is greater.",d);
          }  
      }
      else
      {
        if (c>d)
        {
            printf("%d is greater.",c);
        }
        else
        {
            printf("%d is greater.",d);
        }
        
      }
       
   }
   else 
   {
      if (b>c)
      {
          if (b>d)
          {
            printf("%d is greater.",b);
          }
          else
          {
            printf("%d is greater.",d);
          }

      }
      else
      {
          if (c>d)
          {
            printf("%d is greater.",c);
          }
          else
          {
            printf("%d is greater.",d);
          }
          
      }
      
   }

  // int num1, num2, num3, num4; 
 
	// printf("Enter four numbers: "); 
	// scanf("%d%d%d%d", &num1, &num2, &num3, &num4); 
 
	// int largest; 
	// if (num1 > num2) 
	// 	if (num1 > num3) 
	// 		if (num1 > num4) 
	// 			// num1 is the greatest 
	// 			largest = num1; 
	// 		else 
	// 			// num4 is the greatest 
	// 			largest = num2; 
	// 	else 
	// 		if (num3 > num4) 
	// 			// num3 is the greatest 
	// 			largest = num3; 
	// 		else 
	// 			// num4 is the greatest 
	// 			largest = num4; 
	// else 
	// 	if (num2 > num3) 
	// 		if (num2 > num4) 
	// 			// num2 is the greatest 
	// 			largest = num2; 
	// 		else 
	// 			// num4 is the greatest 
	// 			largest = num4; 
	// 	else 
	// 		if (num3 > num4) 
	// 			// num3 is the greatest 
	// 			largest = num3; 
	// 		else 
	// 			// num4 is the greatest 
	// 			largest = num4; 
 
	// printf("%d is the greatest\n", largest); 
   
}