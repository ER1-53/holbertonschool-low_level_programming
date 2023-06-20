#include "main.h"
/**
 *print_alphabet_x10 - retry
 *
 *Description: print 10 alpha
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int ten;

	for (ten = 0; ten <= 10; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);

		}
		_putchar('\n');
	}
}
