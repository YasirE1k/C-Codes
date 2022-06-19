#include <stdio.h>
#include <stdlib.h>

int main() {
	int winter=320;
	int spring,summer,autumn;
	int total;
	
	spring=winter/4;
	summer=spring*8;
	autumn=summer/10;
	total=winter+spring+summer+autumn;
	
	printf("%d people stayed at the hotel in 1 year as total",total);
	
	return 0;
}
