#include <stdio.h>
#include <stdlib.h>

int main() {
	float examone,examtwo,examthree,project,average;
	
	printf("***Exam average program***\n");
	
	examone=48.9;
	examtwo=68.6;
	examthree=88.5;
	project=65.4;
	average=(examone+examtwo+examthree+project)/4;

    printf("Average: %f",average);

	return 0;
}
