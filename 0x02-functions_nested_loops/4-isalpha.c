#include"main.h"
/**
 * _isalpha - tels if s char is lower case
 * @c: the character to be checked
 * Return: 1 if is lower else return 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
return (0);
}
