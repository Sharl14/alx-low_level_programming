#include "main.h"


/**
 * set_bit - sets a bit at a given index to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit.
 * Return: 1 for success, -1 if unsuccessful
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;
*n = (*n | m);

return (1);
}
