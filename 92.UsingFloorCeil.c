#include <stdio.h>
#include <stdlib.h>

int main() {
	double number,result1,result2;
	printf("Enter the number: ");
	scanf("%lf",&number);
	
	result1=floor(number);
	result2=ceil(number);
	
	printf("%.f",result1);
	printf("\n");
	printf("%.f",result2);
	
	return 0;
}
