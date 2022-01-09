#include <stdio.h>
#include <stdlib.h>
/*
0-10  %10 discount
10-20 %20 discount
20+   %30 discount
one book 5 dollar
*/

int main() {
	int boknum,paying1,paying2,paying3;
	
	printf("Enter your book number that you bought: ");
	scanf("%d",&boknum);
	
	if(boknum<10)
	{
	paying1=(5*boknum)*90/100;
	printf("The amount that you need to pay: %d",paying1);
	
	}
	if(boknum>=10 && boknum<30)
	{
	paying2=(5*boknum)*80/100;	
	printf("The amount that you need to pay: %d",paying2);
	}
	if(boknum>=30)
	{
	paying3=(5*boknum)*70/100;
	printf("The amount that you need to pay: %d",paying3);
	}
	
	return 0;
}
