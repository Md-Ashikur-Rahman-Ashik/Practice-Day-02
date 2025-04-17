#include <stdio.h>

int main()
{
    int array_size, i, j;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for (j = 0; j < i; j++)
    {
        /* code */
        if (arr[j] < 0)
        {
            arr[j] = 2;
            printf("%d ", arr[j]);
        }
        else if (arr[j] > 0)
        {
            /* code */
            arr[j] = 1;
            printf("%d ", arr[j]);
        }
        else
        {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}