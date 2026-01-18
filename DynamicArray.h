#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

typedef struct DynamicArray DynamicArray;

DynamicArray *dynamicArray();
void DynamicArray_add();
void DynamicArray_remove();
void *DynamicArray_pop();

#endif