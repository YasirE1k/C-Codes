#include <stdio.h>
#include <stdlib.h>

int main() {
	int s1,s2,avr;
	
	printf("Enter your first exam result: ");
	scanf("%d",&s1);
	
	printf("Enter your second exam result: ");
	scanf("%d",&s2);
	
	avr=(s1+s2)/2;
	
	if (avr>50) 
	{
	printf("Your average %d you passed.",avr);
    }
	else
    {
	printf("Your average %d you couldn\'t pass",avr);
    }
	
	return 0;
}
