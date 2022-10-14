#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
100. #!/bin/bash
gcc -S $CFILE
101. #include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Return: Always 1 (Success)
*     */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
