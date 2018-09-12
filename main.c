#include "functii.h"
int main()
{
    int *heap;
    int heap_size = 0;
    int capacity;
    int i;
    int j;
    int val;
    int position = -1;
    int del;
    printf("Insert the capacity of the min heap: ");
    scanf("%d", &capacity);

    heap =(int *) malloc(capacity * sizeof(int));


    for(i = 0; i < capacity; i++)
    {
        printf("Insert a value: ");
        scanf("%d", &j);
        insertKey(heap, j, &heap_size, capacity);
    }

    printf("Insert the value you want to search: ");
    scanf("%d", &val);
    if(verifyValue(val, heap, heap_size, &position))
    {
        printf("Yes, the value is in min heap!\n");
    }
    else
    {
        printf("No, the value isn't in min heap!\n");
    }
    for(i = 0; i < heap_size; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\nInsert the value you want to delete: ");
    scanf("%d", &del);
    if(verifyValue(del, heap, heap_size, &position))
    {
        deleteKey(heap, position, &heap_size);
    }
    else
    {
        printf("The value isn't in min heap!\n");
    }

    for(i = 0; i < heap_size; i++)
    {
        printf("%d ", heap[i]);
    }
    return 0;
}
