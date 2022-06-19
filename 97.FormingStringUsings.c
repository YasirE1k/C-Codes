#include <stdio.h>
#include <stdlib.h>

int main() {
	char bookname[40];
	printf("The name of the book: ");
	scanf("%s",bookname);
	printf("%s\n",bookname);
	printf("%20s\n",bookname);
	printf("%20.5s\n",bookname);
	printf("%-20s",bookname);
	
	return 0;
}
