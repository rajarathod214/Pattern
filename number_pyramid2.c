#include<stdio.h>


int main()
{
	int height, outer_loop,inner_loop;


	printf("\n Enter row height:");
	scanf("%d",&height);


	for(outer_loop=1;outer_loop<=height;outer_loop++)
	{
		for(inner_loop=0;inner_loop<outer_loop;inner_loop++)
		{
			printf(" %2d ",outer_loop);
			
		}

		printf("\n");

	}

	

}
