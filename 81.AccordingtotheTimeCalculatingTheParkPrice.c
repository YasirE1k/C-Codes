#include <stdio.h>
#include <stdlib.h>

int main() {
	int time;
	
	printf("Enter the time that you stayed at the car park: ");
	scanf("%d",&time);
	if(0<=time && time<=4)
		{
			printf("The price that you need to pay: 10 dollar");
		}
	if(time>=5 && time<=8)
		{
			printf("The price that you need to pay: 12 dollar");
		}	
	if(time>=9 && time<=12)
		{
			printf("The price that you need to pay: 15 dollar");
		}	
	if(time>=13)
		{
			printf("The price that you need to pay: 20 dollar");
		}		
	return 0;
}
