#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int subsets(int a[],int size)
{
	int count =0;
	if (size <0)
		return 0 ;

	count=1+subsets(a,size-1)+subsets(a,size-1);
	return count;
}


void printSubsets(int a[],int size)
{

	int noSubsets=(pow(2,size)-1);
	int temp;
	for (int i=0;i<=noSubsets;i++)
	{
		temp=i;
		printf("{");
		for (int j=0;j<size;j++)
		{
			if(temp & 1)
			printf("%d",a[j]);
			temp=temp>>1;
		}	
		printf("} \n")	;

	}



}



int main()
{
int a[4]={1,2,3,4};
//printf("Count = %d ",subsets(a,3));
printSubsets(a,4);
return 0;
}
