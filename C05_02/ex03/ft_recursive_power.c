/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:16:00 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/11 13:57:24 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(5, 2));
	printf("%i\n", ft_recursive_power(5, -3));
	printf("%i\n", ft_recursive_power(16, 3));
	printf("%i\n", ft_recursive_power(16, 0));
	printf("%i\n", ft_recursive_power(2, 31));
	return (0);
}
*/
