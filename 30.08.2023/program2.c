#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter values a,b,c and d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("a is greater..");
            }
            else
            {
                 printf("d is greater..");
            }
            
        }
        else
        {
           if (c>d)
           {
                printf("c is greater..");
           }
           else
           {
                printf("d is greater..");
           }
              
        }
        
        
    }
    else
    {
        if (b>c)
        {
             printf("b is greater..");
        }
        else
        {
             printf("c is greater..");
        }
        

    }

    

}