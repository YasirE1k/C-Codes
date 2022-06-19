#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int statictic[]={2,1,0,0,2,1,1,2,1,0};
	int point1=0;
	int point2=0;
	
	for(i=0;i<=9;i++)
	{
		if(statictic[i]==2)
		{
			point1=point1+3;
		}
		if(statictic[i]==0)	
		{
			point2=point2+1;
		}
	}
	printf("Your point %d Congrulations you didn't stay relegated",point1+point2);
	return 0;
}
