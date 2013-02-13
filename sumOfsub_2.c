#include<stdio.h>
#include<stdlib.h>

int sum(int a[],int size, int value,int sol[],int count)
{ int k,q;

	if (value ==0)
	{	
		printf("\n");
		for (int i=0;i<count;i++)
			printf(" %d ",sol[i] );
		return 1;
	}
	if (value<0 || size<0)
		return 0;
	sol[count]=a[size];count++;
	k=sum(a,size-1,value-a[size],sol,count);
	--count;sol[count]=0;
	q=sum(a,size-1,value,sol,count);
	//return (sum(a,size-1,value-a[size])|sum(a,size-1,value));
	if(k |q)
	{
		return 1;
	}
	else
		return 0;
}


int main()
{

	int a[5]={1,4,5,7,8};
	int sol[5]={0,0,0,0,0};
	sum(a,4,12,sol,0);

	return 0;
}
