#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	double result;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	result=sqrt(number);
	
	printf("Square root of the number: %.3f ",result); //.3 is to describe digit after the comma
	
	return 0;
}
