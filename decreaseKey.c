#include "functii.h"
void decreaseKey(int *heap, int i, int new_val)
{
    heap[i] = new_val;
    while (i != 0 && heap[parent(i)] > heap[i])
    {
       swap(&heap[i], &heap[parent(i)]);
       i = parent(i);
    }
}
