#include<stdio.h>
#include <stdlib.h>
int num[4]={0,0,0,0};
int min=1500;
int min_cent(int coins[] , int value,int number)
{


 	int q=0,k=0;
	if (value==0 )
	{
		return 0;
	}
	if (value <0 ||number <0)
		return 1500;
//  	if (num[number]!=0)
//		return num[number];

	q=min_cent(coins,value-((value/coins[number])*coins[number]),number-1)+(value/coins[number]);	
	//k=min_cent(coins,value,number-1);
	if ((number-1) >=0)
	{
		if (q<num[number-1])
			return q;
		else
			return  num[number-1];
	}
	else
		return q;

/*
	if (q<k || k ==0)
		return q;
	else
		return k;
*/
}


int main()
{

	int coin[]={5,10,20,25};
	int q=0,j=0;	
	for (int i=0;i<4;i++)
	{
		q=min_cent(coin,70,i);

		if (q<min)
		{ num[i]=q;min=q;}
		else
		 num[i]=min;
	
	}
	
	for (int i=0;i<4;i++)
		printf("%d \t",coin[i]);
	printf("\n");
	for (int i=0;i<4;i++)
		printf("%d \t ",num[i]);
	
	return 0;
}

