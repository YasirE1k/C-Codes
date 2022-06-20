#include <stdio.h>
#include <stdlib.h>

int total(int s1,int s2)
{
	int s3;
	s3=s1+s2;
	return s3;
}
int main() {
	int t;
	t=total(3,4);
	printf("%d\n",t);
	
	t=total(5,10);
	printf("%d",t);
	
	return 0;
}
