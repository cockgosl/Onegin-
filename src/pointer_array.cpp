#include "pointer_array.h"

char** Initpointerarr(char* buffer, size_t* nLines) {
    assert (buffer);
    assert (nLines);
    size_t in = 0;
    while (buffer[in] != '\0') { 
        if (buffer[in] == '\n') {
            (*nLines)++; 
            buffer[in] = '\0';
        }
        in++;
        if (buffer[in] == '\0') {
            (*nLines)++;
        }
    }

    char** pointer_array = (char**) calloc (sizeof(char*), *nLines); 
    char* pointer = buffer;  

    for (unsigned int counter = 0; counter < *nLines; counter++) {
        pointer_array[counter] = pointer;
        pointer = strchr ((char*) pointer, '\0') + 1;
    }
    return pointer_array;
}