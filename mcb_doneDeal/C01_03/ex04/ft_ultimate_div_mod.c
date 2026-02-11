/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:20:28 by macosta-          #+#    #+#             */
/*   Updated: 2026/01/26 11:29:38 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 2;
	ft_ultimate_div_mod(&x, &y);
	x = (x % 10) + '0';
	y = (y % 10) + '0';
	write(1, &x, 1);
	write(1, " and ", 5);
	write(1, &y, 1);
}
*/
