#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 */
void _putchar(char c)
{
    write(1, &c, 1); 
}
