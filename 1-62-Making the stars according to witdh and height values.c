#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,height,width;
	printf("Enter the height value: ");
	scanf("%d",&height);
	printf("Enter the width value: ");
	scanf("%d",&width);
	
	for(i=1;i<=height;i++)
	{
		for(j=1;j<=width;j++)
		{
		printf("*");
	    }
		printf("\n");
	}
	
	return 0;
}
