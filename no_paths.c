#include <stdio.h>
#include <stdlib.h>

int noPaths (int initialX, int initialY, int finalX,int finalY)
{
	int count =0;
	printf("\n %d , %d ", initialX,initialY);
	if (initialX == finalX && initialY ==finalY)
	{
		return 1;

	}
	else if (initialX<=finalX && initialY<=finalY )
	{
		
		count=noPaths(initialX+1,initialY,finalX,finalY)+noPaths(initialX,initialY+1,finalX,finalY);
		
	}
	else if (initialX > finalX || initialY > finalY)
	{
		return 0;
	}

return count ;
}

int main()

{

	int k= noPaths(0,0,2,2);
	printf("No of Paths = %d\n",k);
	return 0;

}
