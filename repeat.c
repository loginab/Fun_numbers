#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count =0,sum=0,a1=0,b=0;
	int a[10]={2,2,3,3,4,4,5,5,2,5};
	for(int i=0;i<10;i++)
		count =count ^ a[i];
	while( !(count &1))
	{
		 b++;count=count>>1;
		
	}
	a1=0;count=0;
	for(int i=0;i<10;i++)
	{
		if (a[i] & (1<<b))
			count=count ^a[i];
		else
			a1=a1 ^a[i];	
	}
	printf("\n %d , %d",count,a1);
	return 0;
}
