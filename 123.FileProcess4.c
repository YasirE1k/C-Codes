#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *document;
	char character;
	document=fopen("C:\\Users\\john\\Desktop\\newfile4.txt","r");
	do
	{
	character=getc(document);
	printf("%c",character);
	}
	while(character!=EOF);
	fclose(document);
	
	return 0;
}
