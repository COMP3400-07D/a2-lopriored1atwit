#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 * Function fills the array with numbers from beginning to the end
 * The function will stop when the array is full returning the array size
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if(array == NULL || array_len <= 0){
        return 0;
    }

    int num = 0;
    for(int i = begin; i <= end && num < array_len; i++){
        array[num] = i;
        num++;
    }
    return num;
}
