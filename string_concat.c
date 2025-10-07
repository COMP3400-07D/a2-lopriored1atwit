#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 * Function contatenates src2 to the end of src1 without reaching it's max capacity
 * Returns null if the value is invalid
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if(src1 == NULL || src2 == NULL || src1_cap <= 0){
        return;
    }

    int s1 = 0;
    int s2 = 0;
    while(s1 < src1_cap - 1 && src1[s1] != '\0'){
        s1++;
    }
    while(s1 < src1_cap - 1 && src2[s2] != '\0'){
        src1[s1] = src2[s2];
        s1++;
        s2++;
    }
    src1[s1] = '\0';
}

