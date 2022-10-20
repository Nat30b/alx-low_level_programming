#include <stdio.h>
/**
 *fibonacci :> first 50 fibonacci numbers
 */
int main(void)
{
int i, a, b, result;
a=0;
b=1;
for (i = 1; i <= 50; i++)
{
printf("%d\n, ", a);
result = a + b;
a = b;
b = result;
}
return (0);
}

