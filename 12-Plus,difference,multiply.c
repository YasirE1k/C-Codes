#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,total,difference,multiply;
	printf("Enter the first number: ");
	scanf("%d",&number1);
	
	printf("Enter the second number: ");
	scanf("%d",&number2);
	
	total=number1+number2;
	multiply=number1*number2;
	difference=number1-number2;
	
	printf("total: %d \n",total);
	printf("multiply: %d\n",multiply);
	printf("difference: %d",difference);
	
	return 0;
}
