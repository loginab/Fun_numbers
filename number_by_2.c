#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int change_two(int k)
{
	int i=0,l=0;
	i=k/10;
	l=k-(i*10);
	return(l*10+i);
}

int change_digits(int num)
{
	int k=num,count=0,k1=0;
	int proc=num,temp=0;
	while(k >0)
	{
		k/=10;
		count++;
	}
	k=num;
	if (count %2 !=0)
	{	
		k/=10;
	}
	proc=k;k1=0;
	while(k >0)
	{	
		temp=change_two(k%100);
		proc=proc-((k%100)*pow(100,k1));
		proc=proc+(temp*(pow(100,k1)));
		k=k/100;
		k1+=1;
		
	}
	if (count %2 !=0)
		 proc=proc*10+(num%10);
	return proc;
}
	
int main()
{
	int num=4865791;
	printf("\n %d",num);
	printf("\n %d \n",change_digits(num));
	return 0;
}
