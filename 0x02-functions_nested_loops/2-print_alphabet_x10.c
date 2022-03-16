#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	int count = 0;
	char ch = 'a';
	
	while (count < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		
		{
			_putchar(ch);
			ch++
		}
		
		_putchar('\n');
		count++;
	}

}
