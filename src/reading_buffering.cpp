#include "reading_buffering.h"

char* ReadBuffer(FILE* text, size_t* size) {
    assert (text);
    assert (size);
    struct stat statistic = {};

    char* buffer = NULL;
    int descriptor = fileno(text); 
    fstat (descriptor, &statistic);    

    *size = statistic.st_size;;
    buffer = (char*) calloc(sizeof (char), *size + 1);
    buffer[*size] = '\0';
    fread (buffer, sizeof(char), *size, text); 
    return buffer;   
}