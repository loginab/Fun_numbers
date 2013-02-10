/* Source CAREER CUP */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printPar(int l , int r, char str[],int count)
{
	if (l<0 || r<l)
		return ;
	if (l==0 && r==0)
	{	str[count]='\0';
		printf("\n %s",str);
	}
	else
	{
		if (l>0)
		{
			str[count]='(';
			printPar(l-1,r,str,count+1);
		}
		if (r>0)
		{
			str[count]=')';
			printPar(l,r-1,str,count+1);
		}
	}

	
}


int main()
{
char a[30];
strcpy(a,"");
printPar(3,3,a,0);
return 0;
}
