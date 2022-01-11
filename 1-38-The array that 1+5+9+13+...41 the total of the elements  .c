#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int total;
	total=0;
	for(i=1;i<=41;i+=4)
	{
	total=total+i;
	}
	printf("Result: %d",total);
	
	return 0;
}
