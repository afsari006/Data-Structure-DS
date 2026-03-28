#include <stdio.h>

int main()
{
    int A[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int item = 10;
    int i;
    int location = 0;

    for(i = 0; i < n; i++)
    {
        if(A[i] == item)
        {
            location = i;
            break;
        }
    }

    if(location!=-1)
        printf("Element %d found at position %d\n",item,location);
    else
        printf("Element %d not found\n", item);

    return 0;
}
