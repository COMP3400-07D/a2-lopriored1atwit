#include <stddef.h> // For NULL
#include <stdlib.h> // For Malloc
#include <ctype.h> // For toupper
// TODO: Include any necessary header files here

/**
 * TODO: Describe what the function does
 * Function turns the provided string into uppercase characters 
 * Returns null if the value is invalid
 */
char* capitalize(const char* s) {
    if(s == NULL){
        return NULL;
    }

    int l = 0;
    while(s[l] != '\0'){
        l++;
    }

    char* cap = malloc(sizeof(char) * (l + 1));
    if(cap == NULL){
        return NULL;
    }
    
    for(int i = 0; i < l; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cap[i] = toupper(s[i]);
        } else {
            cap[i] = s[i];
        }
    }
    cap[l] = '\0';
    return cap;
}

