/**
 *_putchar - write the character c to stdout
 *@c: the character to print
 *Return: on the success
 *on error, -1 is the returned and eror is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

