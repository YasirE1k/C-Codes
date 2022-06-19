#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter the heat of the water: ");
	scanf("%d",&number);
	
	if(number>=100)
	{
	printf("Steam");
	}
	if(number>0 && number<100)
	{
	printf("Liquid");
    }
	if(number<=0)
	{
	printf("Ice");
	}
	
	return 0;
}
