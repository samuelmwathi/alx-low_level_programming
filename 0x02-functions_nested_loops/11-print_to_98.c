#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - prints up to 98
 * @x: start at
 */
void print_to_98(int x)
{
if (x == 98)
{
printf("%i\n", x);
}
else if (x > 98)
{
while (x >= 98)
{
if (x == 98)
{
printf("%i\n", x);
}
else 
{
printf("%i, ", x);
}
x--;
}
}
else if (x < 98)
{
while (x <= 98)
{
if (x == 98)
{
printf("%i\n", x);
}
else
{
printf("%i, ", x);
}
x++;
}
}
}
