#include <stdlib.h>

typedef struct DynamicArray {

    int size;
    int numElements;
    void *items;

} DynamicArray;


DynamicArray *dynamicArray()
{

    DynamicArray *array = (DynamicArray*) malloc(sizeof(DynamicArray));
    array->size = 5; 
    array->items = (void*) malloc(sizeof(void*)*5);

}
void DynamicArray_add(DynamicArray* array, void* data)
{


};
void DynamicArray_remove(){};
void* DynamicArray_pop(){};

static DynamicArray* resize(DynamicArray* array){

    
}
