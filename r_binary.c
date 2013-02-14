#include<stdio.h>
#include<stdlib.h>

void binary(int a[],int low , int high,int element)
{

	int mid=(low+high)/2;
	if (low > high)
	{
		printf("\nelement not found \n");
		return ;
	}
	if( a[mid]==element)
	{
		printf("\n element found at location %d \n", mid);
		return ;
	}
	
	if (a[mid]<element)
	{
		if (a[low]<=a[mid] ||element<a[low] )
			low=mid+1;
		else
			high=mid-1;
	}
	else
	{
		if (a[mid]<=a[high] || a[high] <element)
			high=mid-1;
		else
			low=mid+1;
	}
	
	binary(a,low,high,element);


}

int main()
{

	int a[5]={5,4,1,2,3};
	binary(a,0,4,3);
	return 0;
}
