#include <stdio.h>
#include <stdlib.h>

int main() {
	int edge,area,circumference;
	printf("Enter one edge of the square: ");
	scanf("%d",&edge);
	
	area=edge*edge;
	circumference=4*edge;
	
	printf("The area of the square: %d\n",area);
	printf("The circumference of the square: %d\n",circumference);
	
	return 0;
}
