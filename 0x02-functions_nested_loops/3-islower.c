#include"main.h"
/**
 * _islower - tels if s char is lower case
 * @c: the character to be checked
 * Return: 1 if is lower else return 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
