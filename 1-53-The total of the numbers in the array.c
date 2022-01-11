#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numbers[]={10,15,20,35};
	int total=0;
	int i;
	
	for(i=0;i<4;i++)
	{
		total=total+numbers[i];
	}
	printf("%d",total);
	return 0;
}
