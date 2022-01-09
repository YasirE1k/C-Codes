#include <stdio.h>
#include <stdlib.h>

int main() {
	int counter=0;
	int i;
	for(i=1;i<=10;i++)
	{
		counter=counter+i;
	}
	printf("counter= %d",counter);
	
	return 0;
}
