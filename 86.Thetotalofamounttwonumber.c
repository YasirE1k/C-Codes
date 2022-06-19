#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int number1,number2;
	int total1=0;
	int total2=0;
	
	printf("***Enter 2 number as different***\n");
	
	printf("Enter the first number: ");
	scanf("%d",&number1);
	printf("Enter the second number: ");
	scanf("%d",&number2);
	
	if(number1!=number2)
	{
			if(number1>number2)
			{
			for(i=number2;i<=number1;i++)	
			{
			total1=i+total1;
		    }
			printf("The total of the number of %d to %d :%d ",number2,number1,total1);
			}
			else
			{
			for(i=number1;i<=number2;i++)
			{
			total2=i+total2;	
			}
			printf("The total of the number of %d to %d :%d ",number1,number2,total2);
			}
	}
	else
	{
		printf("The numbers are the same please try again");
	}
	
	return 0;
}
