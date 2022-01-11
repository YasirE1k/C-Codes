#include <stdio.h>
#include <stdlib.h>

//girilen sayýnýn faktoriyelini while ile bulan kod 
int main() {
	
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
	
	int i=1;
	int faktoriyelsonuc=1;
	while(i<=x)
	{
		faktoriyelsonuc=faktoriyelsonuc*i;		
		i++;
	}
	printf("Sayinin faktoriyeli:%d ",faktoriyelsonuc);
	
	return 0;
}
