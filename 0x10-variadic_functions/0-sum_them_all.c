#include<stdio.h>
#include "variadic_functions.h"
/**
 *main - check the code
 *
 * Return: 0.
 */
int main(void)
{
int sum;
sum = sum_them_all(5, 10, 15, 20);
_putchar("%d\n", sum);
return (0);
}
