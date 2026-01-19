#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

typedef struct DynamicArray {

    int size;
    int numElements;
    void **items;

} DynamicArray;

DynamicArray *dynamicArray();
void DynamicArray_add(DynamicArray *array, void *data);
void DynamicArray_remove(DynamicArray *array, int index);
void *DynamicArray_pop(DynamicArray *array);
void *DynamicArray_get(DynamicArray *array, int i);
#endif