#include <stdio.h>

int main()
{
    int A[] = {10,20,30,40,50,60};
    int n = 6;
    int item = 10;
    int location = 0;

    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;

        if (A[mid] == item)
        {
            location = mid;
            break;
        }
        else if (item < A[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }

    if (location !=-1)
    {
        printf("Item %d found at index %d.\n", item, location);
    }
    else
    {
        printf("Item %d not found.\n", item);
    }

    return 0;
}
