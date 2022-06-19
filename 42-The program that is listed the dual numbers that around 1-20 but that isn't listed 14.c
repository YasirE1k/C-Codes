#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=2;
	while (i>1 && i<14 && i%2==0)
	{
		printf("%d\n",i);
		i+=2;
	}
	int a=16;
	while (a<20 && a%2==0)
	{
		printf("%d\n",a);
		a+=2;
	}
	
	return 0;
}
