#include <stdio.h>
#include <stdlib.h>

int main() {
	int i ;
	int counter=1;
	for(i=1;i<=7;i++)
	{
		counter=counter*i;
	}
	printf("%d",counter);
	
	return 0;
}
