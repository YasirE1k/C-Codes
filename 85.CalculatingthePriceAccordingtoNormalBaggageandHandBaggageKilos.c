#include <stdio.h>
#include <stdlib.h>

int main() {
	int normalbaggage,handbaggage;
	int price1=0;
	int price2=0;
	
	printf("Enter your normal baggage kilos: ");
	scanf("%d",&normalbaggage);
	printf("Enter your hand baggage kilos: ");
	scanf("%d",&handbaggage);
	
	if(normalbaggage>15)
		{
		price1=(normalbaggage-15)*5;
		}
	if(handbaggage>8)
		{
		price2=(handbaggage-8)*4;	
		}
	printf("The price that you need to pay: %d",price1+price2);
	
	return 0;
}
