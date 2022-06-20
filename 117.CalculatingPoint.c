#include <stdio.h>
#include <stdlib.h>
#define point 2.19
#define point2 3.47         

int main() {
	
	int language,math;
	float languagepoint,numericalpoint;
	
	printf("Enter your language net: ");
	scanf("%d",&language);
	printf("Enter your math net: ");
	scanf("%d",&math);
	
	languagepoint=language*point+math*point2+50.25;
	numericalpoint=language*point+math*point2+51.45;
	printf("language point: %.2f\n",languagepoint);
	printf("numerical point: %.2f",numericalpoint);
	
	return 0;
}
