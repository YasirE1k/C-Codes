#include <stdio.h>
#include <stdlib.h>

struct saving
	{
	char name[20];
	int	number;
	int classs;
	float average;
	};
int main() {

struct saving std;
	printf("Enter the student name: ");
	scanf("%s",&std.name);
	printf("Enter the student number: ");
	scanf("%d",&std.number);
	printf("Enter the student class: ");
	scanf("%d",&std.classs);
	printf("Enter the average of the student: ");
	scanf("%f",&std.average);
	
	printf("%s\n",std.name);
	printf("%d\n",std.number);
	printf("%d\n",std.classs);
	printf("%.2f",std.average);
	
	return 0;
}
