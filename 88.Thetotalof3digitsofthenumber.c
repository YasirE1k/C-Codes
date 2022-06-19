#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;
	int number;
	printf("Enter a number 3 digits: ");
	scanf("%d",&number);	
	a=number/100;
	b=(number%100)/10;
	c=number%10;
	
	printf("Total of the digits of the number: %d",a+b+c);
	
	return 0;
}
