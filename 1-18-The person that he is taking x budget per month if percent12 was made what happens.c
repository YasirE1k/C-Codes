#include <stdio.h>
#include <stdlib.h>

int main() {
	float previouswage,newwage;
	printf("Enter your previous wage: ");
	scanf("%f",&previouswage);
	
	newwage=previouswage+previouswage*12/100;        
	
	printf("New wage is %f",newwage);
	
	return 0;
}
