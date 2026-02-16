/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:57:09 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/12 17:46:05 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (tab[0] == 10 - n)
			break;
		ft_putchar(',');
		ft_putchar(' ');
		i = n - 1;
		while (i >= 0 && tab[i] == 9 - (n - 1 - i))
			i--;
		tab[i] = tab[i] + 1;
		while (++i < n)
		{
			tab[i] = tab[i - 1] + 1;
		}
	}
}

/*
void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_array(int n, int *range)
{
	//printf("start print_array\n");
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(range[i] + '0');
		i++;
	}
}

void	ft_generate_combn(int n, int index, int start, int *range)
{
	//printf("start generate_combn\n");
	if (index == n)
	{	
		ft_print_array(n, range);
		if (range[0] != 10 - n)
			write(1, ", ", 2);
		return ;
	}
	//printf("start loop generate_combn\n");
	while (start <= 9)
	{
		range[index] = start;
		ft_generate_combn(n, index + 1, start + 1, range);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	range[9];

	if (n < 1 || n > 9)
		return ;
	ft_generate_combn(n, 0, 0, range);
}
*/

int	main(void)
{
	ft_print_combn(5);
	write(1, "\n", 1);
	return (0);
}
