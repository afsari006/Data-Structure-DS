#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element %d found at position %d\n", key, i+1);
    else
        printf("Element %d not found\n", key);

    return 0;
}
