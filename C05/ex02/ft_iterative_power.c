/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:03:01 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/11 13:56:18 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
*/
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(5, 3));
	printf("%i\n", ft_iterative_power(2, 3));
	printf("%i\n", ft_iterative_power(10, 4));
	printf("%i\n", ft_iterative_power(1, 20));
	return (0);
}
*/
