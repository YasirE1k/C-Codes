#include <stdio.h>
#include <stdlib.h>
//The student that was entered 3 exams 1 project.
//avr<50 ff 
//50<avr<60 dd
//60<avr<70 cc
//70<avr<85 bb
//85<avr    aa  
int main() {
	int s1,s2,s3,p,avr;
	
	printf("Enter your first exam result:");
	scanf("%d",&s1);
	printf("Enter your second exam result:");
	scanf("%d",&s2);
	printf("Enter your third exam result:");
	scanf("%d",&s3);
	printf("Enter your project point: ");
	scanf("%d",&p);
	
	avr=(s1+s2+s3+p)/4;
	
	if(avr<50)
	printf("Result: ff");
	if(avr>=50 && avr<60)
	printf("Result: dd");
	if(avr>=60 && avr<70)
	printf("Result: cc");
	if(avr>=70 && avr<85)
	printf("Result: bb");
	if(avr>=85)
	printf("Result: aa");
	
	return 0;
}
