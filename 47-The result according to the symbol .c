#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number1,number2,result;
	char symbol;
	number1=75;
	number2=15;
	
	printf("Enter a symbol: ");
	scanf("%s",&symbol);
	
	switch(symbol)
	{
	case '+':result=number1+number2; printf("result: %d",result);break;
	case '-':result=number1-number2; printf("result: %d",result);break;
	case '*':result=number1*number2; printf("result: %d",result);break;
	case '/':result=number1/number2; printf("result: %d",result);break;	
	default: printf("Wrong symbol");break;
	}
	
	return 0;
}
