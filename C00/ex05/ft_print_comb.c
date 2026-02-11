#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	char	l;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				l = a + '0';
				write(1, &l, 1);
				l = b + '0';
				write(1, &l, 1);
				l = c + '0';
				write(1, &l, 1);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
