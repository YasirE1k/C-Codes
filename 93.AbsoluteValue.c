#include <stdio.h>
#include <stdlib.h>

int main() {
	double number,numberabsolutevalue;
	
	printf("Enter the number: ");
	scanf("%lf",&number);
	
	numberabsolutevalue=fabs(number);
	
	printf("The absolute value of the number: %.lf",numberabsolutevalue);
	
	return 0;
}
