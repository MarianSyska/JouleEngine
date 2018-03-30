#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ArrayList.h"

void AddItemToArrayList(ArrayList* list, void* item){
    if(list->cursor < list->arraySize){
        list->dataArray[list->cursor] = item;
        list->cursor++;
    } else{
        if(!list->next){
            list->next = malloc(sizeof(ArrayList));

            //TODO: teste auf null
            memset(list->next, 0, sizeof(ArrayList));

            list->next->arraySize = list->arraySize;
            list->next->dataSize = list->dataSize;

            list->next->dataArray = malloc(list->dataSize * list->arraySize);

            //TODO: teste auf null
            memset(list->next->dataArray, 0, list->dataSize * list->arraySize);
        }

        AddItemToArrayList(list->next, item);
    }
}

void* RemoveItemFromArrayList(ArrayList* list, unsigned int index, bool smooth){
    if(index < list->cursor){
        void* data = list->dataArray[index];

        if(!list->next && list->cursor == index) list->dataArray[index] = NULL;

        if(!smooth){
            list->dataArray[index] = NULL;
        } else{
            void* lastItem = GetLastItemFromArrayList(list);
            if(data == lastItem){
                list->dataArray[index] = NULL;
            } else{

            }

        }

        return data;
    } else{
        if(!list->next) return NULL;
        return RemoveItemFromArrayList(list->next, index - list->arraySize, smooth);
    }
}

void* GetLastItemFromArrayList(ArrayList* list){
    if(list->cursor == 0) return NULL;
    if(list->cursor < list->arraySize){
        void* data = list->dataArray[list->cursor - 1];
        list->dataArray[list->cursor - 1] = NULL;
        return data;
    } else{
        void* data;
        if(data = GetLastItemFromArrayList(list->next)){
            return data;
        } else{
            void* data = list->dataArray[list->arraySize - 1];
            list->dataArray[list->arraySize - 1] = NULL;
            return list->dataArray[list->arraySize - 1];
        }
    }
}

void* GetItemFromArrayList(ArrayList* list, unsigned int index){
    if(index < list->arraySize){
        return list->dataArray[index];
    } else{
        if(!list->next) return NULL;
        return GetItemFromArrayList(list->next, index - list->arraySize);
    }
}

ArrayList* ConstructArrayList(int arraySize, size_t dataSize){
    ArrayList* list = malloc(sizeof(ArrayList));
    memset(list, 0, sizeof(ArrayList));

    list->arraySize = arraySize;
    list->dataSize = dataSize;
    list->dataArray = malloc(arraySize * dataSize);
    memset(list->dataArray, 0, arraySize * dataSize);
    return list;
}