#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	if(number%5==0)
	{
	printf("The number is divided to 5 completely");
    }
	else
	{
	printf("The number isn't divided to 5 completely");	
	}
	
	return 0;
}
