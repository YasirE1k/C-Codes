#include <stdio.h>
#include <stdlib.h>

int main() {
	int numbers[]={1,2,3,4,5,6,7};
	int factorial=1;
	int i;
	for(i=0;i<7;i++)
	{
	factorial=factorial*numbers[i];
    }
	printf("My factorial result: %d",factorial);
	
	return 0;
}
