#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print out alphabets in small letters then big letters'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}