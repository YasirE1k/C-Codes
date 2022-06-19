#include <stdio.h>
#include <stdlib.h>

//There aren't the mistake in small lines but it is giving the mistake in big lines, I didn't understand the reason, when I changed the place of int matrix but 
//I don't know the reason
int main() {
	int line,column,i,j,k,n;
	printf("line number: ");
	scanf("%d",&line);
	printf("column number:");
	scanf("%d",&column);
	
	int matrix[line][column];
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("\n[%d][%d]---> enter ",i+1,j+1);
		scanf("%d",&matrix[i][j]);
	    }
	}
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
