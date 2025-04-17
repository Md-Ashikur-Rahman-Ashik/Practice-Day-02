#include <stdio.h>

int main()
{
    int array_size, i, j, expected_number;

    scanf("%d", &array_size);

    int arr[array_size];

    for (i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    scanf("%d", &expected_number);

    for (j = 0; j < i; j++)
    {
        /* code */
        if (arr[j] == expected_number)
        {
            printf("%d", j);
            return 0;
        }
    }

    printf("-1");

    return 0;
}