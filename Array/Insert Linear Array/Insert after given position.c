#include <stdio.h>
int n, i;
int arr[10] = {10, 20, 30, 40, 50};
int p;
void print()
{
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertAfterGivenPos(int value)
{
    for(i = n; i > p; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[p] = value;
    n++;
}
int main()
{
    n = 5;
    p = 3;
    printf("Original Array:\n");
    print();
    insertAfterGivenPos(100);
    printf("After Insertion After Position %d:\n", p);
    print();

    return 0;
}
