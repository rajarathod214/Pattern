#include<stdio.h>


int main()
{
	int row,i,j;

	printf("\n Enter height of pyramid:");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" * ");
		}

		printf("\n");
	}
	

}
