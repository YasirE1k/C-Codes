#include <stdio.h>
#include <stdlib.h>

int main() {
	int edgeofsquare,areaofsquare,circumferenceofsquare;
	edgeofsquare=10;
	
	areaofsquare=edgeofsquare*edgeofsquare;
	circumferenceofsquare=4*edgeofsquare;
	
	
	printf("Area of square: %d \n", areaofsquare );
	printf("Circumference of square: %d", circumferenceofsquare);
	
	return 0;
}
