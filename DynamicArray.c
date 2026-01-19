#include <stdlib.h>
#include <stdio.h>

typedef struct DynamicArray {

    int size;
    int numElements;
    void **items;

} DynamicArray;


DynamicArray *dynamicArray()
{

    DynamicArray *array = (DynamicArray*) malloc(sizeof(DynamicArray));
    array->size = 8; 
    array->numElements = 0;
    array->items = (void*) malloc(sizeof(void*)*8);
    return array;

}
static void DynamicArray_grow(DynamicArray* array)
{
    
    
    int newSize = array->size*2;
    array->items = realloc(array->items,sizeof(void*)*newSize);
    array->size = newSize;
    printf("%d\n",array->size);
    return;
    
    
   
}

static void DynamicArray_shrink(DynamicArray* array)
{

    printf("shrinkinng");
    int newSize = array->size/2;
    array->items = realloc(array->items,sizeof(void*)*newSize);
    array->size = newSize;
    return;

}

void DynamicArray_add(DynamicArray* array, void* data)
{
  
    if (array->numElements == 0)
    {
        array->items[0] =data;
        array->numElements++;
        return;
    }

    
    
    if (array->numElements == array->size)
    {
        DynamicArray_grow(array);
    }


    array->items[array->numElements] = data;
    array->numElements++;
    

}

void DynamicArray_remove(DynamicArray* array,int index)
{
    for (int i = index; i < array->numElements; i++)
    {
        if (i == array->numElements-1)
        {
           array->items[i]=NULL;
           
           continue;
        }
        
        array->items[i] = array->items[i+1];

    }
    array->numElements--;

     if (array->numElements < array->size*0.25 && !(array->size==8))
    {
        DynamicArray_shrink(array);
    }

    
}
void* DynamicArray_pop(DynamicArray* array)
{

    void* returnData = array->items[array->numElements-1];
    array->items[array->numElements-1] = NULL;
    array->numElements--;

     if (array->numElements < array->size*0.25 && !(array->size==8))
    {
        DynamicArray_shrink(array);
    }

    return returnData;
}

void *DynamicArray_get(DynamicArray* array,int i){


    return array->items[i];
}




