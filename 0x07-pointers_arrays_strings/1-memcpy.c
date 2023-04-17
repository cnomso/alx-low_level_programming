#include "main.h"

/**
 * _memcpy(char *dest, char *src, unsigned int n)
 * 
 * Return : return a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n){

    int c = 0;
    int i = c;

    for ( c < 1; c++ )
    {
        
        dest[c] = src[c]; 
        
    }

    return (dest);
}

