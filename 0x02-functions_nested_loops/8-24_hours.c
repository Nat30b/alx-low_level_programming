#include "main.h"
#include <stdio.h>
/**
 *jack_bauer :> Starting from 24
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b <= 59; b++)
			printf("%d : %d\n", a, b);
	}
}
