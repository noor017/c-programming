#include <stdio.h>

int main ()
{
    char array[100]="BANGLADESH", temp;
    int i, j, size=10;                      //BANGLADESH has 10 characters

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
    printf("Sorting of 'BANGLADESH' is '%s'.\n", array);
    return 0;
}
