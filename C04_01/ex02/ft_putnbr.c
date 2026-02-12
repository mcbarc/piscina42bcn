/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 17:15:02 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/04 10:03:22 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + 48;
	write(1, &c, 1);
}

/*
int	main(void)
{
	int	n;

	n = 42;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = 848;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = -2147483648;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = -42;
	ft_putnbr(n);
	write(1, "\n", 1);
	n = 0;
	ft_putnbr(n);
	write(1, "\n", 1);
}
*/
