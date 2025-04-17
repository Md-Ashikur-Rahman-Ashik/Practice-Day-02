#include <stdio.h>

int main()
{
    int array_size, i, j, k, lowest_number = 1000000;

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
        if (arr[j] < lowest_number)
        {
            if (arr[j] == lowest_number)
            {
                continue;
            }
            k = j + 1;
            lowest_number = arr[j];
        }
    }

    printf("%d %d", lowest_number, k);

    return 0;
}