#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c;
	int i;
	int counter=0;
	int number;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=(i/10)%10;
		c=i%10;
	if(a==b || a==c || b==c)
	{
	}
	else 
	{
		counter++;
	}
	}
		printf("%d",counter);

	return 0;
}
