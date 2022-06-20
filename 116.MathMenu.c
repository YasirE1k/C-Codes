#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("********************\n");
	printf("**      MENU      **\n");
	printf("********************\n");
	printf("1.Collection Process\n");
	printf("2.Multiply Process\n");
	printf("3.Find square\n");
	printf("4.Find cube\n");
	printf("5.Equation(5x^2+4x+3)\n");

	int s1,s2,choosing,result;
	
	printf("Your process: ");
	scanf("%d",&choosing);
	
	switch(choosing)
	{
	case 1: printf("Enter two number:");
			scanf("%d%d",&s1,&s2);
			result=s1+s2;
		    printf("%d",result);
	break;
	case 2: printf("Enter two number:");
			scanf("%d%d",&s1,&s2);
			result=s1*s2;
		    printf("%d",result);
	break;
	case 3: printf("Enter number:");
			scanf("%d",&s1);
			result=s1*s1;
		    printf("%d",result);
	break;
	case 4: printf("Enter number:");
			scanf("%d",&s1);
			result=s1*s1*s1;
		    printf("%d",result);
	break;
	case 5: printf("Enter number:");
			scanf("%d",&s1);
			result=5*(s1*s1)+4*s1+3;
	        printf("%d",result);
    break;
	}
	return 0;
}
