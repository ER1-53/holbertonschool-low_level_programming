#include "main.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - return
 *@name: is come back
 *@f: it is the pointer to the function of the main
 *
 *Description: le parametre void (*f)(char *) fait réfèrence à la function
 * appeler en argument dans le main.
 *
 *
 *
 *Return: Success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);

}
