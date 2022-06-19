#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int total=0;
	for(i=1;i<=81;i+=4)
		{
		total=total+i;	
		}
	printf("%d",total);
	
	return 0;
}
