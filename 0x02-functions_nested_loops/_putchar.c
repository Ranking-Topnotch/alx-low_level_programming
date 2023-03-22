#include<unistd.h>

/**
* _putchar - writes the character c to stdout;
*@c: the character to print
* Return: 0 success and 1 on error
*/

Int _putchar(char c)
{
return (write (1, &c, 1))
}
