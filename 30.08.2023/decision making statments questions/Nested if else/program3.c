// 3.WAP to check greater of five numbers.

#include<stdio.h>
void main()
{
    int num1,num2,num3,num4,num5;
    printf("Enter values of  five numbers:");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    if (num1>num2)
    {
        if (num1>num3)
        {
            if (num1>num4)
            {
                if (num1>num5)
                {
                    printf("%d is greater.",num1);
                }
                else
                {
                    printf("%d is greater.",num5);
                }
                
            }
            else
            {
                if (num4>num5)
                {
                   printf("%d is greater.",num4);
                }
                else
                {
                    printf("%d is greater.",num5);
                }
                
            }
            
        }
        else
        {
            if (num3>num4)
            {
                if (num3>num5)
                {
                   printf("%d is greater.",num3);
                }
                else
                {
                    printf("%d is greater.",num5);
                }
                
            }
            else
            {
               if (num4>num5)
               {
                   printf("%d is greater.",num4);
               }
               else
               {
                   printf("%d is greater.",num5);
               }
               
            }
            
        }
        
    }
    else
    {
        if (num2>num3)
                {
                    if (num2>num4)
                    {
                        if(num2>num5)
                        {
                            printf("%d is greater.",num2);
                        }
                        else
                        {
                            printf("%d is greater.",num5);
                        }
                    }
                    else
                    {
                        if (num4>num5)
                        {
                            printf("%d is greater.",num4);
                        }
                        else
                        {
                            printf("%d is greater.",num5);
                        }
                        
                    }
                    
                }
                else
                {
                    if (num3>num4)
                    {
                       if (num3>num5)
                       {
                           printf("%d is greater.",num3);
                       }
                       else
                       {
                           printf("%d is greater.",num5);
                       }
                       
                    }
                    else
                    {
                        if (num4>num5)
                        {
                            printf("%d is greater.",num4);
                        }
                        else
                        {
                           printf("%d is greater.",num5);
                        }
                        
                    }
                    
                }
    }

}