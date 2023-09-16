#include"main.h"
/**
 * print_sign - tels if s char is lower case
 * @c: the character to be checked
 * Return: 1 else 0
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
_putchar('-');
return (0);
}
