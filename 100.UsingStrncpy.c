#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char from[30]="Hello Hamburg";
	char to[30]="";
	strncpy(to,from,14);
	printf("%s",to);
	
	return 0;
}
