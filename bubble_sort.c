#include<stdio.h>

int main()
{
    int data[100];
    int N, i, j, t;

    printf("Enter the number of data: ");
    scanf("%d", &N);
    printf("Enter data to be search: ");

    for(i=0; i<N; i++)
    {
        scanf("%d", &data[i]);
    }

    for(i=0; i<N-1; i++)
    {
        for(j=0; j<N-1; j++)
        {
            if(data[j] > data[j+1])
            {
                t = data[j];
                data[j] = data[j+1];
                data[j+1] = t;
            }
        }
    }

    printf("The sorted is" );
        for(i=0; i<N; i++)
        {
            printf("\t %d", data[i]);
        }

    printf("\n \n The second highest is:" );
    for(i=N-2; i<N-1; i++)
        {
            printf("\t %d", data[i]);
        }

    return 0;
}
