#include<stdio.h>
void main()
{

    int temp,summer;
    printf("enter the temp:");
    scanf("%d",&temp);
    printf("enter 1 for summer \t 0 for not summer");
    scanf("%d",&summer);
    if(summer==1)
    {
        if(temp>=60&&temp<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else  
    {
        if(temp>=40&&temp<=90)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        
    } 
}