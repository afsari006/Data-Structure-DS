#include<stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top=1;
int pop()
{
    int item;
    if(top==-1)
    {
        printf("UNDERFLOW\n");
        return 0;
    }
    item=stack[top];
    top--;
    return item;
}
int main()
{
    stack[0]=10;
    stack[1]=50;
    stack[2]=90;
    int value=pop();
    printf("Popped Item:%d\n",value);
    return 0;
}

