#include <stdio.h>

/**
 * main - prints the alphabets in lowercase,
 * followed by a new line, except q and e
 * Return: Away 0 (Succes)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;

	}
	putchar('\n');
	return (0);
}
