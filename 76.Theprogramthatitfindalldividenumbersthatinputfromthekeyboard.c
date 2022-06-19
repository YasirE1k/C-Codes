#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		if(number%i==0)	
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
