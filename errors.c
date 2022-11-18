#include "shell.h"

/**
 * _eputs - prints an input string
 * @str: the string to be printed
 * Return: 0
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - write the charactuer c to stderr
 * @c: the character to print
 * Return: 1 on success, error -1 and errno is set appropriately
 */
int _eputchar(char c)
{
	static int i;
	static char buff[WRITE_BUF_SIZE];

	if (c == BUFF_FLUSH || i >= WRITE_BUFF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buff[i++] = c;
	return (1);
}

/**
 * _putfd - writes the character c to given fd
 * @c: the charcter to print
 * @fd: the fileescriptor to write to
 * Return: 1 on succes, -1 no error is set appropriately
 */

int _putfd(char c. int fd)
{
	static int i;
	static char buff[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - pritns an input string
 * @str: the string to be printed
 * @fd: the filedescription to write to
 * Return: the number of chars put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
