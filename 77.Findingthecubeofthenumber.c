#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	number=number*number*number;
	printf("%d",number);
	
	return 0;
}
