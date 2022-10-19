#include "main.h"

/**
 * _putbin - converts a number to binary
 * @n: the decimal number
 * @k: the char counter
 *
 * Return: Nothing
 */

void _putbin(int n, int *k)
{
	char a[1000]; /* an array to store the bin nums after conversion */
	int i = 0; /* for the loop */

	while (n) /* code will run as long as n != 0 */
	{
		/*this part handles the decimal to binary 
		 * conversion with bitwise operators*/
		if (n & 1)
			a[i] = (1 + '0');
		else
			a[i] = (0 + '0');
		n >>= 1;
		i++;
	}
	i--;
	/*prints the result of the code above with a while loop*/
	while (i >= 0)
	{
		_putchar(a[i], k);
		i--;
	}
}
