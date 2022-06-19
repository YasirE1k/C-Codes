#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20],surname[20],age[2],city[10],job[20];

    printf("Enter your name: ");
    scanf("%s",name);

    printf("Enter your surname: ");
    scanf("%s",surname);

    printf("Enter your age: ");
    scanf("%s",age);

    printf("Enter your city: ");
    scanf("%s",city);

    printf("Enter your job: ");
    scanf("%s",job);

    printf("Name: %s",name);
    printf(" - Surname: %s\n",surname);
    printf("Age: %s \n" ,age);
    printf("Job: %s - City: %s",job,city);

	return 0;
}
