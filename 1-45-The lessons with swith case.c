#include <stdio.h>
#include <stdlib.h>

int main() {
	char lesson;
	
	printf("Enter the letter");
	scanf("%s",&lesson);
	switch(lesson)
	{
	case 'e': printf("English");break;
	case 'm': printf("Math");break;
	case 's': printf("Social");break;
	case 'c': printf("Science");break;
	default : printf("Wrong letter");break;
	}
	return 0;
}
