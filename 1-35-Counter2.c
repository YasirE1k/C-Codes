#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int counter=0;
	
	for(i=1;i<=9;i++)
	{
		counter=counter+i;
	}
	printf("%d",counter);
	
	return 0;
}
