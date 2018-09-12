#include "functii.h"
void insertKey(int *heap, int k, int *heap_size, int capacity)
{
    if (*heap_size == capacity)
    {
        printf("\nOverflow: Could not insertKey\n");
        return;
    }

    *heap_size += 1;
    int i = *heap_size - 1;
    heap[i] = k;

    while (i != 0 && heap[parent(i)] > heap[i])
    {
       swap(&heap[i], &heap[parent(i)]);
       i = parent(i);
    }
}

