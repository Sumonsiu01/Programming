#include<stdio.h>


void even_odd(int x)
{
    if(x%2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd number");
    }
}

int main()
{
    int n;

    scanf("%d",&n);
    even_odd(n);
}
