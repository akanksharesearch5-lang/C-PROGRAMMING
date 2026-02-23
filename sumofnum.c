#include<stdio.h>
int add(int i,int m,int sum)
{
    if(i>m)
    {
        return sum;
    }
    sum=sum+i;
    add(i+1,m,sum);
}
int main()
{
    int m,i,a;
    int sum=a;
    printf("enter the start and end range values\n");
    scanf("%d %d %d",&m,&i,&a);
    int sum1=add(m,i,a);
    printf("sum1=%d\n",sum1);
    return 0;
}
