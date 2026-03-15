#include <stdio.h>
int n, i,p;
int arr[5] = {10, 20, 30, 40, 50};
void print()
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertIntoGivenPos(int value)
{
    for(int i=n; i>p-1; i--)
    {
        arr[i] = arr[i-1];
    }
     arr[p-1]=value;
     n=n+1;
}
int main()
{
    n = 5;
    p=3;
    printf("Original Array:\n");
    print();
    insertIntoGivenPos(60);
    printf("After Insertion at First:\n");
    print();
    return 0;
}
