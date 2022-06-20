#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *file;
	file=fopen("C:\\Users\\john\\Desktop\\knowledge2.txt","w");
	
	putc('a',file);
	putc('\n',file);
	putc('b',file);
	
	fclose(file);
	return 0;
}
