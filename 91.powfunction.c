#include <stdio.h>
#include <stdlib.h>

int main() {
	int x,y;
	int result;
	printf("Enter the base value: ");
	scanf("%d",&x);
	
	printf("Enter the power value: ");
	scanf("%d",&y);
	
	result=pow(x,y);
	printf("%d",result);	
	
	return 0;
}
