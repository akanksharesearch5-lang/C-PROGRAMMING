#include<stdio.h>
int main()
{
    int a[50];
	int area=0;
	int amount=0;
	int n1,n2,size;
	printf("enter the size:");
	scanf("%d",&size);
	printf("enter the element:\n");
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<=(size-1);i++)
	{
		for(int j=0;j<=(size-1);j++)
		{
			if(a[i]>a[j])
			{
				amount=a[i]*a[j];
			}
			else
			{
				amount=a[j]*a[i];
			}
			if(amount>area)
			{
			n1=a[i];
			n2=a[j];
			area=amount;
			}
		}
	}
 printf("n1=%d\tn2=%d\tarea=%d \n",n1,n2,area);
  return 0;
}
