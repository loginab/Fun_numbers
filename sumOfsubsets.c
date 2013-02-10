#include<stdio.h>
#include<stdlib.h>

int sumSubsets(int a[],int size, int k,int value)
{
	int val1,val2;
	if (k==0 && value==0)
		return 1;

	if (k<0 || value <0|| size <0)
		return 0;
	
	val1=sumSubsets(a,size-1,k-a[size-1],value-1);
	val2=sumSubsets(a,size-1,k,value);
	
	if (val1 == 1 || val2==1)
		return 1;
	else
		return 0;
}


int main()
{

	int a[7]={15,4,17,8,2,10,3};
	if(sumSubsets(a,7,12,3))
		printf("\n Subset is present \n");
	else
		printf("\n Subset is not present \n");

return 0;
}
