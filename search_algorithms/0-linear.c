#include <stddef.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; 

    size_t i;
    for (i = 0; i < size; ++i) {
        if (array[i] == value) {
            return i; 
        }
    }

    return -1; 
}
