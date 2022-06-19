#include <stdio.h>
#include <stdlib.h>

int main() {
	int pointone,pointtwo,pointthree,average;
	printf("Enter the first exam point: ");
	scanf("%d",&pointone);
	
	printf("Enter the second exam point: ");
	scanf("%d",&pointtwo);
	
	printf("Enter the third exam point: ");
	scanf("%d",&pointthree);
	
	average=(pointone+pointtwo+pointthree)/3;
	printf("The average of the student: %d",average);
	
	return 0;
}
