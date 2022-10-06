#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: memory pointer
 * @old_size: size in bytes allocated for ptr
 * @new_size: bytes size of new memory block
 * Return: NULL and ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int new_memory, k;
	char *memory_blk;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		new_memory = old_size;
	}
	else
	{
		new_memory = new_size;
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	memory_blk = malloc(new_size);
	if (memory_blk == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < new_memory; k++)
	{
		memory_blk[k] = ((char *)ptr)[k];
	}
	free(ptr);
	return (memory_blk);
}
