#include "main.h"
#include "string.h"

/**
 * _memcpy(char *dest, char *src, unsigned int n)
 * 
 * Return : return a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n){

    int i = 0;

    for(i = 0; i < n; i++)
    {
        dest[i] = src; 
        
    }

    return dest;
}
