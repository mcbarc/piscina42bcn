/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:03:49 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/29 15:57:10 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	first;
	int	last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}

/*
#include <unistd.h>

void	ft_putdigit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
	write(1, " ", 1);
}

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	tab = (int []){65, 66, 67, 68, 69, 70, 71};
	size = 7;
	i = 0;
	while (i < size)
		ft_putdigit(tab[i++]);
	write(1, "\n", 1);
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
		ft_putdigit(tab[i++]);
	write(1, "\n", 1);
	return (0);
}
*/
