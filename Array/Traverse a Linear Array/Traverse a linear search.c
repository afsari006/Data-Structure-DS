#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, n = 5;

    printf("Elements of the array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
