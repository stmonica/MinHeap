#include "functii.h"
int extractMin(int *heap, int *heap_size)
{
    int root;
    if (*heap_size <= 0)
        return INT_MAX;
    if (*heap_size == 1)
    {
        *heap_size -= 1;
        return heap[0];
    }

    root = heap[0];
    heap[0] = heap[*heap_size - 1];
    *heap_size -= 1;
    MinHeapify(heap, 0, heap_size);

    return root;
}
