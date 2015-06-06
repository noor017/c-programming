#include <stdio.h>

int main ()
{
    char array[100], temp;
    int i, j, size;

    printf("Enter a word: ");
    scanf("%s", array);

    size = strlen(array);         //strlen() function calculates the length of array. It takes only one argument, i.e, array.

    for (i=0; i<size-1; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Sorting: %s\n", array);
    return 0;
}
