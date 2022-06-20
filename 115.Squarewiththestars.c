#include <stdio.h>
#include <stdlib.h>
void square(int shortt,int longg)
	{
		int i,j;
		for(i=0;i<longg;i++)
		{
			for(j=0;j<shortt;j++)
			{
				printf("*");
			}
		printf("\n");
		}
	}
int main() {
	square(4,10);
	
	return 0;
}
