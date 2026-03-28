#include <stdio.h>

int binarySearch(int arr[], int n, int item)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == item)
            return mid;

        else if (item < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int item = 40;

    int result = binarySearch(arr, n, item);

    if (result != -1)
        printf("Element found at position %d", result + 1);
    else
        printf("Element not found");

    return 0;
}
