#include <stdio.h>
#include <stdlib.h>
//write the 2*3 matrix values from input
int main() {
	int i,j,k,l;
	int matrix[2][3];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%d][%d] ---> : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}	
	for(k=0;k<2;k++)
		{
		for(l=0;l<3;l++)	
		{
		printf("%d ",matrix[k][l]);	
		}	
		printf("\n");
		}
	
	return 0;
}
