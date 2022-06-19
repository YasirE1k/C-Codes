#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	int base;
	printf("Enter the base of the triangle: ");
	scanf("%d",&base);
	for(i=1;i<=base;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	
	return 0;
}
