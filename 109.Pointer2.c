#include <stdio.h>
#include <stdlib.h>

int main() {
	char letter='k';
	char *pt=&letter;
	printf("Adress1:%x\n",pt);
	pt++;
	printf("Adress2:%x\n",pt);
	pt--;
	printf("Adress3:%x\n",pt);
	
	pt=pt+5;
	printf("Adress4:%x",pt);
	
	return 0;
}
