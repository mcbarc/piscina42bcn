/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:28:13 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/29 13:31:06 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	r;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	r = (nb % 10) + '0';
	write(1, &r, 1);
	return ;
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-10);
	write(1, "\n", 1);
	ft_putnbr(1234567890);
	write(1, "\n", 1);
	ft_putnbr(48);
	write(1, "\n", 1);
}
*/
