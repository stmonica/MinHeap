#include "functii.h"
void MinHeapify(int *heap, int i, int *heap_size)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < *heap_size && heap[l] < heap[i])
        smallest = l;
    if (r < *heap_size && heap[r] < heap[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&heap[i], &heap[smallest]);
        MinHeapify(heap, smallest, heap_size);
    }
}
