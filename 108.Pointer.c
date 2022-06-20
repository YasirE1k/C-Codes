#include <stdio.h>
#include <stdlib.h>

int main() {
	int number=20;
	int	*s=&number;
	printf("Value:%d\n",number);	
	printf("Adress:%x\n",s);
	
	char letter='a';
	char *h=&letter;
	printf("Value:%c\n",letter);
	printf("Adress:%x",h);
	
	return 0;
}
