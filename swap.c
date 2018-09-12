#include "functii.h"
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int parent(int i)
{
    return (i-1)/2;
}

int left(int i)
{
    return (2*i + 1);
}

int right(int i)
{
    return (2*i + 2);
}

