#include<stdio.h>
void main()
{
    int a,i;
    printf("enter the number\n");
    scanf("%d",&a);
    void factor(int i,int a)
    {
        if(i>a)
        {
        return;
        }
    if(a%1==0)
    {
        printf("%d is a factor\n",i);
    }
    factor(i+1,a);
    }
}
