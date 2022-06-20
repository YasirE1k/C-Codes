#include <stdio.h>
#include <stdlib.h>

struct bookknowledge
{
	char bookname[20];
	char bookwriter[20];
	int  bookprice;
	float bookpoint;
};
int main() {
	struct bookknowledge kb={"Of Mice and Men","John Steinbeck",10,7.25};
	printf("Book name: %s\n",kb.bookname);
	printf("Book Writer: %s\n",kb.bookwriter);
	printf("Book Price:%d\n",kb.bookprice);
	printf("Book Point: %.2f\n",kb.bookpoint);									
	
	return 0;
}
