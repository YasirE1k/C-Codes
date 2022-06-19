#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char source[30]="Hello NewYork";
	char copy[30]="";
	
	strcpy(copy,source);
	printf("%s",copy);
	
	return 0;
}
