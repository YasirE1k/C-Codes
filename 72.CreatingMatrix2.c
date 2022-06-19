#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int line,column,i,j,k,n;
	
	printf("line number: ");
	scanf("%d",&line);
	
	printf("column number: ");
	scanf("%d",&column);
	
	int matrix [line][column];
	
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("\n[%d][%d] ---> ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	
	}
	printf("\n\nOccured matrix\n");
	for(k=0;k<line;k++)
	{
		for(n=0;n<column;n++)
		{
			printf("%d ",matrix[k][n]);
			
		}
		printf("\n");
	}
	return 0;
}
