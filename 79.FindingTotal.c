#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,number3,number4;
	int total;
	printf("Enter 1. number: ");
	scanf("%d",&number1);
	printf("Enter 2. number: ");
	scanf("%d",&number2);
	printf("Enter 3. number: ");
	scanf("%d",&number3);
	printf("Enter 4. number: ");
	scanf("%d",&number4);
	
	total=number1+number2+number3+number4;
	printf("Total of the numbers that was entered: %d",total);
	
	return 0;
}
