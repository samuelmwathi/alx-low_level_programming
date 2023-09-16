#include"main.h"
/**
 * times_table - print last digit
 */
void times_table(void)
{
int a, b, product;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
product = a * b;
if (product > 9)
{
int l_num = product % 10;
int f_num = (product - l_num) / 10;
_putchar(44);
_putchar(32);
_putchar(f_num + '0');
_putchar(l_num + '0');
}
else
{
if (b != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(product + '0');
}
}
_putchar('\n');
}
}

