#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[100];
	int i;
	int number;
	printf("Enter the element number of the array: ");
	scanf("%d",&number);
	
	for(i=0;i<number;i++)
	{
		printf("Enter the %d. element of the array",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<number;i++)
	{
		printf("%d ",array[i]);
	}
	
	return 0;
}
