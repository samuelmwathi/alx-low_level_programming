#include"main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets
 * returns : void
 */
void print_alphabet_x10(void)
{
char a;
int x;
for (x = 1; x <= 10; x++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}

}
