#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
       	char a;
	int b;
	long int c;
	long long int e;
	float d;
printf("Size of a char:%lu byte(s):",(unsigned long) sizeof(a));
printf("Size of an int:%lu byte(s):",(unsigned long) sizeof(b));
printf("Size of a long int:%lu byte(s):",(unsigned long) sizeof(c));
printf("Size of a long long int:%lu byte(s):",(unsigned long) sizeof(e));
printf("Size of a float:%lu byte(s):",(unsigned long) sizeof(d));

return (0);
}
