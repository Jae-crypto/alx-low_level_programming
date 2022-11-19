#include <stdio.h>
#include "dog.h"
/**
*print_name - prints the name of a function
*@name: pointer
*@f: pointer
*Return:1 or 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
