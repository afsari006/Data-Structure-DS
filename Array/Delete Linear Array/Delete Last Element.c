#include<stdio.h>
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    n--;
    for ( int  i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
