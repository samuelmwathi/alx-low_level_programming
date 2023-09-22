#include<unistd.h>
/**
 * _putchar - writes to the std
 * Return: retuns 0 on success
 */
int _putchar(char c)
{
return (write(1,&c,1));
}
