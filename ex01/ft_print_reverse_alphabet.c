/*#include <stdio.h>*/

void  ft_print_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
}

/*int main(void)
{
	ft_print_alphabet();
	return 0;
}*/
