#include "functii.h"
void deleteKey(int *heap, int i, int *heap_size)
{
    decreaseKey(heap, i, INT_MIN);
    extractMin(heap, heap_size);
}
