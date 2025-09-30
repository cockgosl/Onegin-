#include <stdio.h>

#include "reading_buffering.h"
#include "pointer_array.h"
#include "comparator.h"
#include "my_strcmp.h"
#include "bubble_sort.h"
// TODO: .gitignore что делает . COMMIT IT HELLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLll
// How to compile from different folders
int main() {
    char* buffer = NULL;
    char** pointer_array = NULL;
    size_t nLines = 0;
    size_t size = 0;
    FILE* text = fopen ("text/onegin.txt", "rb"); 
    buffer = ReadBuffer(text, &size);
    pointer_array = Initpointerarr(buffer, &nLines);
    bubbles1 (pointer_array, nLines);
    for (unsigned int j = 0; j < nLines; j++) {
        printf ("%s\n", pointer_array[j]);
    }
}