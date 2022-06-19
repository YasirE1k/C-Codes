#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	int total=0;
	while(number!=0)
	{
		printf("Enter number: ");
		scanf("%d",&number);
		total=total+number;
	}
	printf("%d",total);
	
	return 0;
}
