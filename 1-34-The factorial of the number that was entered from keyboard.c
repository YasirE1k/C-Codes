#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter the number that you wanted to find the factorial of the number: ");
	scanf("%d",&number);
	
	int i;
	int counter=1;
	
	for(i=1;i<=number;i++)
	{
		counter=counter*i;
	}
	printf("The factorial of the number: %d",counter);
	
	return 0;
}
