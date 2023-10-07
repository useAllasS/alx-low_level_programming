#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked  allocates the  memory using malloc
 *
 * @b: The size of the memory to allocate
 *
 * Return A pointer to the allocated memory
 *         If malloc fails, the function terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);

    if (p == NULL)
    {
	exit(98);
    }

    return (p);
}
