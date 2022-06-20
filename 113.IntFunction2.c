#include <stdio.h>
#include <stdlib.h>

int total(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}
int main() {
	int number1,number2;
	
	printf("Enter first number: ");
	scanf("%d",&number1);
	printf("Enter second number: ");
	scanf("%d",&number2);
	int t;
	t=total(number1,number2);
	printf("%d",t);	
	
	return 0;
}
