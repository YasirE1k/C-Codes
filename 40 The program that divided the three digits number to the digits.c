#include <stdio.h>
#include <stdlib.h>

int main() {
	int number,a,b,c;
	printf("Enter the number that has got 3 digits: ");
	scanf("%d",&number);
	
	c=number%10;
	b=((number-c)%100)/10;
	a=(number-10*b-c)/100;
	
	printf("%d 1 digits \n",c);
	printf("%d 10 digits\n",b);
	printf("%d 100 digits",a);
	
	return 0;
}
