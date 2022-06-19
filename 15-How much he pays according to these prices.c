#include <stdio.h>
#include <stdlib.h>

/*The prices in the cinema;
popcorn 2 dollar
coke 2 dollar
water 1 dollar
ticket 8 dollar  A client that he bought according to these prices,how much he pays?
*/

int main() {
	int popcorn,coke,water,ticket,total;
	printf("Enter the popcorn number: ");
	scanf("%d",&popcorn);
	
	printf("Enter the coke number: ");
	scanf("%d",&coke);
	
	printf("Enter the water number: ");
	scanf("%d",&water);
	
	printf("Enter the ticket number: ");
	scanf("%d",&ticket);
	
	total=2*popcorn+2*coke+1*water+8*ticket;
	
	printf("Total amount that you need to pay: %d", total);
	
	return 0;
}
