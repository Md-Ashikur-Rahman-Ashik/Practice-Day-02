#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_size, i, j, sum = 0;

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
        sum = sum + arr[j];
    }

    sum = abs(sum);

    printf("%d", sum);

    return 0;
}