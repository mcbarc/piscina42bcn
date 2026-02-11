/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macosta- <macosta-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:27:44 by macosta-          #+#    #+#             */
/*   Updated: 2026/02/11 11:02:39 by macosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(-4));
	printf("%i\n", ft_iterative_factorial(0));
}
*/
