#include<stdio.h>
void main()
{

    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
    int ab=a+b;
    int bc=b+c;
    int ca=a+c;
    if(ab==10||bc==10||ca==10)
    {
        printf("10");
    }
    else if(a>10||b>10||c>10) 
    {
        printf("5");
    }
    else
    {
    	printf("0");
	}
}