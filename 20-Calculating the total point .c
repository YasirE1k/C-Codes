#include <stdio.h>
#include <stdlib.h>

//english 1.999
//math 3.998
//social 1
//science 2.999
//base 100.160
int main() {
	
	float eng,mat,soc,sci,pointeng,pointmath,pointsoc,pointsci,engcoef,matcoef,soccoef,scicoef,base,totalpoint;
	engcoef=1.999;
	matcoef=3.998;
	soccoef=1;
	scicoef=2.999;
	base=100.160;
	
	printf("Enter your english point: ");
	scanf("%f",&eng);
	printf("Enter your math point: ");
	scanf("%f",&mat);
	printf("Enter your social point: ");
	scanf("%f",&soc);
	printf("Enter your science point: ");
	scanf("%f",&sci);
	
	pointeng=engcoef*eng;
	pointmath=matcoef*mat;
	pointsoc=soccoef*soc;
	pointsci=scicoef*sci;
	totalpoint=pointeng+pointmath+pointsoc+pointsci+base;
	
	printf("Your point: %f",totalpoint);
	
	return 0;
}
