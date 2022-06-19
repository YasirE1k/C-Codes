#include <stdio.h>
#include <stdlib.h>

int main() {
	int edge1,edge2,area,circumference;
	edge1=5;
	edge2=10;
	area=edge1*edge2;
	circumference=2*edge1+2*edge2;
	printf("The area of the rectangle: %d\n",area);
	printf("The circumference of the rectangle: %d",circumference);
	
	return 0;
}
