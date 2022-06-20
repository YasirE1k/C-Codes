#include <stdio.h>
#include <stdlib.h>

int main() {
 	FILE *document;
 	char character[50];
	document=fopen("C:\\Users\\john\\Desktop\\newfile8.txt","r");
	
	fgets(character,30,document);
	puts(character);
	fclose(document);
	
	return 0;
}
