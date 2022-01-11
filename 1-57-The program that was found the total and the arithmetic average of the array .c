#include <stdio.h>
#include <stdlib.h>
int main() {
	int array[100];
	int i;
	int number;
	int total=0;
	int average;
	printf("Enter the element number of the array: ");
	scanf("%d",&number);
	
	for(i=0;i<number;i++)
	{
		printf("Enter %d. elemnent of the array: ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<number;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n\n\n");
	
	for(i=0;i<number;i++)
	{
	total=total+array[i];	
	}
	average=total/number;
	
	printf("Total of the array elements: %d\n",total);
	printf("Arithmetic average of the array element:%d",average);
	
	return 0;
}
