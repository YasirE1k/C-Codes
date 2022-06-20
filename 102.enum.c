#include <stdio.h>
#include <stdlib.h>

enum cities
{
 hatali,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir	
};

int main() {
	enum cities city;
	city=ankara;
	printf("%d",city);
	
	return 0;
}
