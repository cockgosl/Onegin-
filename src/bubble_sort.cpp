#include "bubble_sort.h"
#include "comparator.h"

void* bubbles1(char** pointer_array, size_t nLines) {
    assert (pointer_array);
    printf("pointerarray from bubble: %p\n", pointer_array);
    printf ("nLines from bubble: %d\n", nLines);

    char** str1 = NULL;
    char** str2 = NULL;
    int sign = 0;
    
    for (size_t i = 0; i < nLines; i++) {
        for (size_t offset = 0; offset < nLines - 1; offset++) {
            str1 = pointer_array + offset;
            str2 = pointer_array + offset + 1;
            sign = Comparator2 (*str1, *str2);
            if (sign > 0)  {
                str_swap(str1, str2);
            }
        }
    }
    return pointer_array;
}

void str_swap (char** str1, char** str2) {
    assert (str1);
    assert (str2);
    char* empty = NULL;
    empty = *str2;
    *str2 = *str1;
    *str1 = empty;
}

