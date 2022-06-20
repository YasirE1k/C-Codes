#include <stdio.h>
#include <stdlib.h>

//strcat
int main() {
	char bookname[30],writer[30],bookwriter[60]; //When I say bookwriter[60]=" l @ problem was solved in console. 
	
	printf("Enter the book name and writer: ");
	scanf("%s%s",bookname,writer);
	
	strcat(bookwriter,bookname);
	strcat(bookwriter," ");
	strcat(bookwriter,writer);
	
	printf("%s",bookwriter);
	
	return 0;
}
