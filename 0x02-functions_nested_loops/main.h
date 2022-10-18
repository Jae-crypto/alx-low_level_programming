#include "main.h"
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
/**
 *main - Prints Holberton as a message.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
int count, sz;
sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
}
