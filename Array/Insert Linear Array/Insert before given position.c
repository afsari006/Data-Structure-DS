#include <stdio.h>
int n, i;
int arr[10] = {10, 20, 30, 40, 50};
int p;
void print()
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertBeforeGivenPos(int value)
{
    for (i = n; i >= p-1; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p-2] = value;
    n++;
}
int main()
{
    n = 5;
    p = 5;
    printf("Original Array:\n");
    print();
    insertBeforeGivenPos(99);
    printf("After Insertion Before Position %d:\n", p);
    print();

    return 0;
}


