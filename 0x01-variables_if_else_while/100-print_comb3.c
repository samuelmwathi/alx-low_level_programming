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

for (b = '0'; b <= '9'; b++)
{
for (a = b + 1; a <= '9'; a++)
{
putchar(b);
putchar(a);
if (b != '8')
{

putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
