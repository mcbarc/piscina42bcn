/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:33:24 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/05 15:26:09 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48)
			return (0);
		n = 0;
		while (str[n])
		{
			if ((i != n) && (str[n] == str[i]))
				return (0);
			n++;
		}
		i++;
	}
	return (i);
}

void	ft_calc_num_base(long nl, int baselen, char *base)
{
	if (nl >= baselen)
		ft_calc_num_base((nl / baselen), baselen, base);
	nl = nl % baselen;
	write(1, &base[nl], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	long	nl;

	baselen = check_base(base);
	nl = (long)nbr;
	if (baselen <= 1)
		return ;
	if (nl < 0)
	{
		nl = -nl;
		write(1, "-", 1);
	}
	ft_calc_num_base(nl, baselen, base);
}

/*
int	main(void)
{	
	ft_putnbr_base(-448, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(448, "01");
	write(1, "\n", 1);
	ft_putnbr_base(448, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(12648430, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(448, "poniguay");
	write(1, "\n", 1);
	ft_putnbr_base(448, "grifndol");
	write(1, "\n", 1);	
	ft_putnbr_base(448, "abccde");
	write(1, "\n", 1);
	return (0);
}
*/
