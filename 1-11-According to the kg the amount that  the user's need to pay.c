#include <stdio.h>
#include <stdlib.h>

//15kg: baggage 8kg: hand per of kg 5 dollar
int main() {
	int baggage,hand,exceed1,exceed2,amountkg,payingthatneeded;
	
	baggage=16;
	hand=8;
	exceed1=baggage-15;
	exceed2=hand-8;
	amountkg=exceed1+exceed2;
	payingthatneeded=5*amountkg;
	
	printf("The amount that you need to pay: %d",payingthatneeded);
	
	return 0;
}
