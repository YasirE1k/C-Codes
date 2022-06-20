#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file;
	file=fopen("C:\\Users\\john\\Desktop\\newfile3.txt","w");
	
	fputs("john",file);
	putc('\n',file);
	fputs("william",file);
	putc('\n',file);
	fputs("89",file);
	putc('\n',file);
	fputs("1.Class",file);
	
	fclose(file);
	return 0;
}
