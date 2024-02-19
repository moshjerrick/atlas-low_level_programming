#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return ((void *)p);
}
