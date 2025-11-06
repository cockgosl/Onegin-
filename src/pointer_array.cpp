#include "pointer_array.h"

char** Init_Pointer_Arr(char* buffer, size_t* nLines) {
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
    if (pointer_array) { 
        char* pointer = buffer;  

        for (unsigned int counter = 0; counter < *nLines; counter++) {
            pointer_array[counter] = pointer;
            pointer = strchr (pointer, '\0') + 1;
        }

    }
    else {
        printf ("memory cannot be allocated");
    }

    return pointer_array;
}