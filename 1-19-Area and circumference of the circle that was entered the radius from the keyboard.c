#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float radius,circlearea,circlecircumference;
	
	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);
	
	circlearea=3.14*radius*radius;
	circlecircumference=2*3.14*radius;
	
	printf("Area of the circle: %f\n",circlearea);
	printf("Circumference of the circle: %f",circlecircumference);
	
	return 0;
}
