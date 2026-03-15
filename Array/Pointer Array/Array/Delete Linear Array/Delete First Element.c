#include<stdio.h>
int main()
{
    int arr[6]={10,20,30,40,50};
    int n=5;
    for (int i=0; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
