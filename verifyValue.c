#include "functii.h"
int verifyValue(int val, int *heap, int heap_size, int *position)
{
    int i;
    for(i = 0; i < heap_size; i++)
    {
        if(val == heap[i])
        {
            *position = i;
            return 1;
        }
    }
    return 0;
}

