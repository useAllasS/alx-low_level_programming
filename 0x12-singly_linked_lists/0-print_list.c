#include "lists.h"
#include "_putchar.c"
/**
 * print_list - Print elements in a linked list.
 * @h: Pointer to the head of the first node.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
    const list_t *nav = h;
    size_t count = 0;

    while (nav)
    {
        if (nav->str != NULL)
        {
            /* Print the length and the string */
            unsigned int len = nav->len;
            char *str = nav->str;
            while (*str)
            {
                _putchar(*str);
                str++;
            }
            _putchar('[');
            while (len != 0)
            {
                int digit = len % 10;
                _putchar('0' + digit);
                len /= 10;
            }
            _putchar(']');
            _putchar(' ');
        }
        else
        {
            /* If str is NULL, print (nil) */
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
        }

        _putchar('\n');  
        count++;
        nav = nav->next;
    }

    return (count);
}
