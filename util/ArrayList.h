#ifndef JE_ARRAYLIST_H
#define JE_ARRAYLIST_H

#include "stdbool.h"

typedef struct ArrayList{
    unsigned int arraySize;
    unsigned int cursor;
    size_t dataSize;

    void** dataArray;
    struct ArrayList* next;
} ArrayList;

void AddItemToArrayList(ArrayList* list, void* item);
void* RemoveItemFromArrayList(ArrayList* list, unsigned int index, bool smooth);
void* GetItemFromArrayList(ArrayList* list, unsigned int index);
void* GetLastItemFromArrayList(ArrayList* list);
ArrayList* ConstructArrayList(int arraySize, size_t dataSize);


#endif