#include <stdio.h>
#include <stdlib.h>

int main() {
	char thedayoftheweek;
	printf("Enter a letter: ");
	scanf("%s",&thedayoftheweek);
	
	switch(thedayoftheweek)
	{
	case 'a': printf("Monday");break;
	case 'b': printf("Tuesday");break;
	case 'c': printf("Wednesday");break;
	case 'd': printf("Thursday");break;
	case 'e': printf("Friday");break;
	case 'f': printf("Saturday");break;
	case 'g': printf("Sunday");break;
	default: printf("You entered wrong code");break;
	}
	
	return 0;
}
