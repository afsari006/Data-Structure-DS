#include <stdio.h>
int n, i;
int a[5] = {10, 20, 30, 40, 50};
void print()
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertAtFirst(int value)
{
    for (i =n; i>0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = value;
    n++;
}
int main()
{
    n = 5;
    printf("Original Array:\n");
    print();
    insertAtFirst(60);
    printf("After Insertion at First:\n");
    print();
    return 0;
}

