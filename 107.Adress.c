#include <stdio.h>
#include <stdlib.h>

int main() {
	int number=10;
	int number2=20;
	double number3=10.25;
	char word='a';
	
	printf("%d\n",number);
	printf("%d\n",number2);
	printf("%.2lf\n",number3);
	printf("%c\n",word);

	printf("%x\n",&number);
	printf("%x\n",&number2);
	printf("%x\n",&number3);
	printf("%x",&word);
	
	return 0;
}
