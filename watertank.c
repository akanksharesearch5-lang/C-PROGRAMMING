#include<stdio.h>
int main()
{
	int area=0;
	int amount=0;
	int n1,n2;
	for(int i=0;i<=(size-1);i++)
	{
		for(int j=0;j<=(size-1);j++)
		{
			if(a[i]>a[j])
			{
				amount=a[i]*(j-1);
			}
			else
			{
				amount=a[j]*(j-1);
			}
			if(amount>area)
			n1=a[i];
			n2=a[j];
			area=amount;
		}
	}
}
{
printf("n1=%d\tn2=%d\tarea=%d \n",n1,n2,area);
}
  return 0;
}
