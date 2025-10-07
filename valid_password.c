#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h> // For isupper/islower

/**
 * TODO: Describe what the function does
 * Function checks if password is valid with certain rules
 * The length must be between 6 - 10 only containing letters
 * 2 uppercase and lowercase letters must be present
 */
bool valid_password(const char* s) {
    if(!s){
        return false;
    }
    int low = 0;
    int up = 0;
    int l = 0;
    int i = 0;

    while(s[i] != '\0'){
        if(!isupper(s[i]) && !islower(s[i]) && !isdigit (s[i])){
            return false;
        }
        if(islower(s[i])){
            low++;
        }
        if(isupper(s[i])){
            up++;
        }
        l++;
        i++;
    }
    if (l >= 6 && l <= 10 && low >= 2 && up >= 2){
        return true;
    } else {
        return false;
    }
}
