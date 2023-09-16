#include<unistd.h>
/**
 * helps print char on terminal
 * returns 1 on success
 * returns -1 on error 
 */

int _putchar(char c)
{
return (write(1,&c,1));
}	
