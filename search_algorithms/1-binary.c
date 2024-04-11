#include <stddef.h>

int binary_search(int *array, size_t size, int value) {
    int left;
    int right;
    int mid;

    if (array == NULL || size == 0) {
        return (-1);
    }

    left = 0;
    right = size - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid; 
        } else if (array[mid] < value) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return (-1);
}

