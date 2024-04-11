#include <stddef.h>

int i = 0;

int linear_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; 

    for (size_t i; i < size; ++i) {
        if (array[i] == value) {
            return i; 
        }
    }

    return -1; 
}
