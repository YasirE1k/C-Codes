#include <stdio.h>
#include <stdlib.h>

int findcube(int number)
{
	int cube;
	cube=number*number*number;
	return cube;
}
int main() {
	int enterednumber;
	printf("Enter a number: ");
	scanf("%d",&enterednumber);
	
	int k;
	k=findcube(enterednumber);
	printf("%d",k);
	
	return 0;
}
