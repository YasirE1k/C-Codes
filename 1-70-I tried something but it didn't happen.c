#include <stdio.h>
#include <stdlib.h>
int main() {
	int line,column,i,j;
	printf("Enter the line numbers of the matrix: ");
	scanf("%d",&line);
	printf("Enter the column number of the matrix: ");
	scanf("%d",&column);
	
	int matrix[line][column];
	
	for(i=0;i<line;i++)
	{
		for(j=0;j<i;j++)
		{
		printf("Enter the line values");
		scanf("%d",&a);
		}
	}	
	for(i=0;i<column;i++)
	{
		for(j=0;j<i;j++)
		{
		printf("Enter the column values");
		scanf("%d",);
		}
	}	*/
	for(i=0;i<line;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("%d",matrix[i][j]);
	    }
	printf("\n");
	}
	
	return 0;
}
