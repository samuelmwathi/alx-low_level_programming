#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;

for (b = '0'; b <= '9'; b++)
{
for (a = b + 1; a <= '9'; a++)
{
for (c = a + 1; c <= '9'; c++)
{

putchar(b);
putchar(a);
putchar(c);
if (b != '7')
{

putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
