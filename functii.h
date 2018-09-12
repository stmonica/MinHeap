#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

 void swap(int *x, int *y);
 void insertKey(int *heap, int k, int *heap_size, int capacity);
 void MinHeapify(int *heap, int i, int *heap_size);
 int verifyValue(int val, int *heap, int heap_size, int *position);
 int extractMin(int *heap, int *heap_size);
 void decreaseKey(int *heap, int i, int new_val);
 void deleteKey(int *heap, int i, int *heap_size);
