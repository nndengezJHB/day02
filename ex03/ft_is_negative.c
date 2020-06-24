/*#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c , 1);
}
*/
void ft_is_negative()
{
	int n;
	n = 1;
	while(n >= -2147483648 && n <= 2147483647)
	{
		if(n < 0)
			ft_putchar('N');
		else
			ft_putchar('P');
		break;
	}
}

/*
int main(void)
{
	ft_is_negative();
	return (0);
}
*/



