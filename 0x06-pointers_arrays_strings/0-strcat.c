#include"main.h"
/**
 * *_strncat - prints a string
 * @dest: inputted number of bytes
 * @src:the srting to append
 * @n:num of srt to the append
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
