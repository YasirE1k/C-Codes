#include <stdio.h>
#include <stdlib.h>

int main()
{
   char bookname[20],writername[20],pagenumber[3],publishhistory[4],printinghouse[20],type[20];

   printf("Write book name: ");
   scanf("%s",bookname);
   printf("Write the writer\'s name: ");
   scanf("%s",writername);
   printf("Write page number: ");
   scanf("%s",pagenumber);
   printf("Write publish history: ");
   scanf("%s",publishhistory);
   printf("Write printing house: ");
   scanf("%s",printinghouse);
   printf("Write the type: ");
   scanf("%s",type);

   printf("Book name: %s\n" ,bookname) ;
   printf("Writer name: %s\n",writername);
   printf("Page number: %s\n",pagenumber);
   printf("Publish history: %s\n",publishhistory) ;
   printf("Printing house %s\n",printinghouse) ;
   printf("Book type: %s\n",type);

	return 0;
}

