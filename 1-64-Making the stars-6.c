#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,height;
	printf("Enter the height: ");
	scanf("%d",&height);
	for(i=1;i<=height;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=height;i++)
	{
		for(j=height;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
