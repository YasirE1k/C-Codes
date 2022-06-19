#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Math Menu\n********************\n");
	printf("1-The area and circumference in the square\n");
	printf("2-The cube of the number that was entered\n");
	printf("3-Calculating area and circumference in the circle\n");
	printf("4-According to x the result of the process 5x^2+7x+9\n");
	printf("5-Calculating area and circumference in the rectangle\n");
	
	int number1,number2,numbertochoose;
	printf("Choose your process:");
	scanf("%d",&numbertochoose);
	
	number1=12;
	number2=16;
	
	switch(numbertochoose)
	{
		case 1:printf("Area of squre:%d\n",(number1*number1));
			   printf("Circumference of the square:%d",(4*number1));
		break;
		case 2:printf("The cube of the number:%d",number1*number1*number1);	  
		break;
		case 3:printf("Area of the circle:%d\n",3*number1*number1); 
		       printf("Circumference of the circle:%d",2*3*number1);
		break;       
		case 4:printf("5x^2+7x+9 result of the process:%d",(5*number1*number1+7*number1+9));
		break;
		case 5:printf("Area of the rectangle:%d\n",(number1*number2));	   		
	           printf("Circumference of the rectangle:%d",2*(number1+number2));
		break;
		default:printf("Wrong entry");
    }
	
	return 0;
}
