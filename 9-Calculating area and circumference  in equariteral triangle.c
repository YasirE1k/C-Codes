#include <stdio.h>
#include <stdlib.h>

int main() {
	int edge1,area,circumference;
	edge1=5;
	area=(edge1*edge1*sqrt(3))/4;
	circumference=3*edge1;
	
	printf("Area of triangle: %d\n",area);
	printf("Circumference of triangle: %d\n",circumference);
	
	return 0;
}
