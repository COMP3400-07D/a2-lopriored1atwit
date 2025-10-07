#include <stddef.h> // For NULL
#include <stdlib.h> //For Malloc
// TODO: Include any necessary header files here

/**
 * TODO: Describe what the function does
 * Creates an array that returns all the even numbers from the beginning to the end
 * Returns null if the value is invalid
 */
int* array_create_evens(int begin, int end) {
    if(begin > end) {
        return NULL;
    }

    int b = begin;
    if(b % 2 != 0){
        b = b + 1;
    }

    if (b > end){
        return NULL;
    }

    int arrC = ((end - b) / 2) + 1;
    int* array = malloc(sizeof(int) * arrC);
    if (array == NULL){
        return NULL;
    }

    int value = b;
    for (int i = 0; i < arrC; i++){
        array[i] = value;
        value += 2;
    }
    return array;
}
