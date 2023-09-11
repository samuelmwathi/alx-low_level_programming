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

for (b = 0; b <= 98; b++)
{
for (a = b + 1; a <= 99; a++)
{
putchar((b / 10) + '0');
putchar((b % 10) + '0');
putchar(' ');
putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (b == 98 && a == 99)
continue;
putchar(',');
putchar(' ');

}
}

putchar('\n');
return (0);
}
