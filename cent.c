#include<stdio.h>
#include<stdlib.h>
void ways(int a[],int value,int size,int no[])
{
	if (size <-1|| value <0)
		return ;
	if (value==0)
	{	
		printf("\n");
		for(int i=0;i<=3;i++)
		{
			printf(" %d* %d \t \t",no[i],a[i]);
		}
	}
	else
	for(int i=value/a[size];i>=0;i--)
	{	no[size]=i;
		ways(a,value-(i*a[size]),size-1,no);
		no[size]=0;
	}
}


int main()
{
int curr[4]={1,5,10,25};
int no[4];
for(int i=0;i<3;i++)
	no[i]=0;
ways(curr,100,3,no);
return 0;
}
