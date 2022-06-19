#include <stdio.h>
#include <stdlib.h>

int main() {
	double number,result1,result2;
	printf("Enter the number: ");
	scanf("%lf",&number);
	
	result1=sin(number);
	result2=cos(number);
	
	printf("Sinus of the number: %lf",result1);
	printf("\n");
	printf("Cosinus of the number: %lf",result2);
	
	return 0;
}
