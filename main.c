#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "util/ArrayList.h"

int main() {

    ArrayList* list = ConstructArrayList(5, sizeof(int*));

    for(int i = 0; i < 20; i++){
        int* value = malloc(sizeof(int));
        *value = i * 7;
        AddItemToArrayList(list, value);
    }

    for(int i = 0; i < 20; i++){
        int* value = (int*) GetItemFromArrayList(list, i);
        printf("%i\n", *value);
    }

	return 0;
}

