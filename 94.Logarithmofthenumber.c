#include <stdio.h>
#include <stdlib.h>

int main() {
	double number,result;
	printf("Enter a number: ");
	scanf("%lf",&number);
	result=log(number);
	printf("%lf",result);
		
	return 0;
}
