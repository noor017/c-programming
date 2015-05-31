#include <stdio.h>

int main()
{

/*
            প্রথমে আমাদের কিছু ভ্যারিয়েবল ডিক্লেয়ার করতে হবে।
            অ্যারে সাইজ 100 এর পরিবর্তে অন্য কিছু হতে পারে কারন এটা পরে চেঞ্জ হবে কিন্তু মিনিমাম 1 দিতে হবে।
            যেহেতু  বাইনারি সার্চ তাই নতুন  ভ্যারিয়েবল  first, last, middle লাগবে।
*/

   int array[100], c, size, search, first, last, middle;

   printf("Enter the size of an array: ");
   scanf("%d", &size);                              /* size দিয়ে  অ্যারে সাইজ ইনপুট নিলাম    */

   printf("Enter %d integer number: ", size);

   for (c = 0; c < size; c++)                       /* c < size দেয়া হয়েছে কারন অ্যারে সাইজ যতবার দেয়া হয়েছে ততবার লুপ ঘুরবে  */
      scanf("%d",&array[c]);                        /*  যতটা  অ্যারে সাইজ দেয়া হয়েছে ততটা ইনপুট ভ্যলু নিবে    */

   printf("Enter the number to be search: ");
   scanf("%d", &search);                            /* search দিয়ে  একটা ভ্যালু  ইনপুট নিবে যেটা   অ্যারের ভিতরে খুজবে     */

   first = 0;                                       /* অ্যারে সবসময় 0 থেকে শুরু হয় a[0] */
   last = size - 1;                                 /*  যেহুতু 0 থেকে শুরু হয়েছে তাই 1 বিয়োগ করতে হবে  */
   middle = (first+last)/2;

   while (first <= last)                            /*  এটা মেইন সুত্র যদি first number টি last number থেকে  ছোট বা সমান হয় তাহলে while লুপের ভিতরের কোড কাজ করবে   */
   {
      if (array[middle] < search)                   /* যদি array[middle] ভ্যালু  search থেকে ছোট হয় তাহলে  first সংখ্যাটা পরিবর্তন হয়ে  middle + 1 এর ভ্যালু হবে  */
         first = middle + 1;

      else if (array[middle] == search)             /* যদি array[middle] ভ্যালু  এবং search ভ্যালু সমান হয় তাহলে  এটা প্রিন্ট হবে  এবং  middle + 1 করে দেখাবে কারন অ্যারে 0 থেকে শুরু হয়  এবং break দিবে পরের কোড আর কাজ করবে না   */
      {
         printf("%d is present at location %d.\n", search, middle+1);
         break;
      }

      else
         last = middle - 1;                         /* এবার নতুন last number হবে  middle - 1  */

      middle = (first + last)/2;                    /* একি ভাবে নতুন first এবং last এর  middle বের  হবে  */
   }

   if (first > last)                                /*  যদি কোনভাবে  first number টি last number থেকে  বড়  হয় তাহলে  while লুপের পরের কোড এটা প্রিন্ট করবে  */
      printf("%d is not present in array.\n", search);

}
