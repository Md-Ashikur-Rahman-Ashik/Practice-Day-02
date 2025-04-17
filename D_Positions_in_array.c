#include <stdio.h>

int main()
{
    int array_size, i, j;

    scanf("%d", &array_size);

    int arr[array_size];

    for ( i = 0; i < array_size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    for ( j = 0; j < i; j++)
    {
        /* code */
        if(arr[j] <= 10){
            printf("A[%d] = %d\n", j, arr[j]);
        }
    }
    
    return 0;
}