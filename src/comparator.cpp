#include "comparator.h"
#include "my_strcmp.h"

int Comparator1 (const void* par1, const void* par2) {
    assert (par1);
    assert (par2);
    const char* s1 = (const char*) par1;
    const char* s2 = (const char*) par2;
    int ind1 = 0;
    int ind2 = 0;
    int sign = 0;
    while (!isalpha(s1[ind1])) { 
        ind1++;
    }
    while (!isalpha(s2[ind2])) {
        ind2++;
    }

    
    sign = mystrcmp(s1 + ind1, s2 + ind2);
    return sign;
}
int Comparator2 (const void* par1, const void* par2) {
    assert (par1);
    assert (par2);
    const char* s1 = (const char*) par1;
    const char* s2 = (const char*) par2;
    int ind1 = 0;
    int ind2 = 0;
    char temp1[200] = {};
    char temp2[200] = {};
    int end1 = strlen (s1) - 1;
    int end2 = strlen (s2) - 1;

    
    for (int index = 0; end1 > 0; end1--, index++ ) {
        temp1[index] = s1[end1];
    }
    for (int ind = 0; end2 > 0; end2--, ind++ ) {
        temp2[ind] = s2[end2];
    }

    if (end1 == 0 && end2 == 0) {
        while (!isalpha(temp1[ind1])) {
            ind1++;
        }
        while (!isalpha(temp2[ind2])) {
            ind2++;
        }
    }
    return mystrcmp(temp1 + ind1, temp2 + ind2);
}