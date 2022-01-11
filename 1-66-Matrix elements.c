#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[2][2];
	array[0][0]=10;
	array[0][1]=20;
	array[1][0]=30;
	array[1][1]=40;

	printf("Matrix 0-0 element:%d\n",array[0][0]);
	printf("Matrix 0-1 element:%d\n",array[0][1]);
	printf("Matrix 1-0 element:%d\n",array[1][0]);
	printf("Matrix 1-1 element:%d\n",array[1][1]);

	return 0;
}
