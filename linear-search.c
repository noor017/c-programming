#include <stdio.h>

int main()
{
   


   int array[100], c, size, search;

   printf("Enter the size of an array: ");
   scanf("%d",&size);

   printf("Enter %d integer number: "), size;

   for (c = 0; c < size; c++)
      scanf("%d", &array[c]);

   printf("Enter the number to be search: ");
   scanf("%d", &search);

   for (c = 0; c < size; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }

   if (c == size)
      printf("%d is not present in array.\n", search);

   return 0;
}
