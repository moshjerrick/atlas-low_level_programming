#include <stddef.h>
#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
    int i = 0;

	if (array == NULL)
        return (-1);

        while (i < (int)size)
        {
            if (array[i] == value)
            {
            return (i);
        }
        else
        i++:
        }
        return (-1);
        }