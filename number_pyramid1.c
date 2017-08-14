#include<stdio.h>


int main()
{
	int height, inner_loop,outer_loop;

	printf("\n Enter the height:");
	scanf("%d",&height);


	for(outer_loop=1;outer_loop<=height;outer_loop++)
	{
		for(inner_loop=1;inner_loop<outer_loop;inner_loop++)
		{
			printf("%2d",inner_loop);
		}

		printf("\n");
	}

}
