#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *textDocument;
	char data1[20]="Computer ";
	char data2[20]="Engineering ";
	char data3[20]="Department";
	
	textDocument=fopen("C:\\Users\\john\\Desktop\\newfile9.txt","w");
	
	fputs(data1,textDocument);
	fputs(data2,textDocument);
	fputs(data3,textDocument);
	
	return 0;
}
