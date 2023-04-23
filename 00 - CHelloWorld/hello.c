#include <stdio.h>
#include <stdlib.h>

int main()
{

   FILE *fptr;
   fptr = fopen("output.txt", "w");

   if (fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   fprintf(fptr, "%s", "Hello World");
   fclose(fptr);
   return 0;
}