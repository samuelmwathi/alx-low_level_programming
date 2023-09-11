#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int b;
char hex;

for (b = 0; b <= 9; b++)
putchar('0' + b);
for (hex = 'a'; hex <= 'f'; hex++)
putchar(hex);
putchar('\n');
return (0);
}
