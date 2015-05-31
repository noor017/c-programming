#include <stdio.h>

int main()
{

/*
            প্রথমে আমাদের কিছু ভ্যারিয়েবল ডিক্লেয়ার করতে হবে।
            অ্যারে সাইজ 100 এর পরিবর্তে অন্য কিছু হতে পারে কারন এটা পরে চেঞ্জ হবে কিন্তু মিনিমাম 1 দিতে হবে।।
*/

   int array[100], c, size, search;

   printf("Enter the size of an array: ");
   scanf("%d",&size);                           /* size দিয়ে  অ্যারে সাইজ ইনপুট নিলাম    */

   printf("Enter %d integer number: "), size;

   for (c = 0; c < size; c++)                   /* c < size দেয়া হয়েছে কারন অ্যারে সাইজ যতবার দেয়া হয়েছে ততবার লুপ ঘুরবে  */
      scanf("%d", &array[c]);                   /*  যতটা  অ্যারে সাইজ দেয়া হয়েছে ততটা ইনপুট ভ্যলু নিবে    */

   printf("Enter the number to be search: ");
   scanf("%d", &search);                        /* search দিয়ে  একটা ভ্যালু  ইনপুট নিবে যেটা   অ্যারের ভিতরে খুজবে     */

   for (c = 0; c < size; c++)                   /* একিভাবে আরেকটা লুপ ঘুরাবো যেটা সবকয়টা ভ্যালু চেক করবে  */
   {
      if (array[c] == search)                   /*  যদি a[c] এর ভ্যালু  এবং  search এর ভ্যালু মিলে তাহলে এটা প্রিন্ট করবে  এবং break দিবে    */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }

   if (array[c] != search)                              /*  যদি a[c] এর ভ্যালু  এবং  search এর ভ্যালু  না মিলে তাহলে এটা প্রিন্ট করবে  */
      printf("%d is not present in array.\n", search);

   return 0;
}
