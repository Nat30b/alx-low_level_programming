#include<unistd.h>

/**
 *putchar writes the charactercto stdout
 *@c:The character to print
 * 
 *Return:On success1.
 *On error,-1 is returned,and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1,  &c,  1));
}
